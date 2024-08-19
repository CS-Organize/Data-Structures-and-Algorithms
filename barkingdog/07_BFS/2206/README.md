# [2206](https://www.acmicpc.net/problem/2206)
solved on: 2024-05-16

## Solutions

BFS 한 번에 풀 수 있을 거 같아서 시도했지만, 실패했다.
```c++
    ...
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    string map[n];
    int dist[n][m];
    queue<T> q;

    f(i, n)
    {
        cin >> map[i];
        fill(dist[i], dist[i] + m, -1);
    }

    dist[0][0] = 1;
    q.push(make_tuple(0, 0, map[0][0] == '1'));
    while (!q.empty())
    {
        T cur = q.front(); q.pop();
        f(dir, 4)
        {
            int nx = X(cur) + dx[dir];
            int ny = Y(cur) + dy[dir];
            // 인덱스 범위 체크
            if (nx >= m || nx < 0 || ny >= n || ny < 0) continue;
            // 이미 벽을 뚫은 적이 있는 루트고 다음에 방문할 곳이 벽이라면 패스
            if (W(cur) && map[ny][nx] == '1') continue;
            // 방문한 적이 있는지 체크
            if (dist[ny][nx] != -1) continue;
            if (map[ny][nx] == '1') W(cur) = true;
            dist[ny][nx] = dist[Y(cur)][X(cur)] + 1;
            q.push(make_tuple(nx, ny, W(cur)));
        }
    }
    cout << dist[n - 1][m - 1] << '\n';
    ...
/* 
반례
6 5 
00000
11110
000_0
01111
01111
00010 

'_' 부분에서 벽을 뚫고 가는 것이 더 빠르기 때문에 m,n에 도달하는 것이 불가능하다.
*/
```
그래서 길을 따라가는 BFS 한 번, 벽에서 시작하는 BFS 한 번을 돌려봤는데 메모리 초과가 났다..
```cpp
int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    string map[n];
    int notBreakDist[n][m], wallBreakDist[n][m];

    f(i, n)
    {
        cin >> map[i];
        fill(notBreakDist[i], notBreakDist[i] + m, -1);
        fill(wallBreakDist[i], wallBreakDist[i] + m, -1);
    }

    queue<P> notBreakQ;
    queue<P> wallBreakQ;
    notBreakDist[0][0] = 1;
    wallBreakDist[0][0] = 1;
    if (map[0][0] == ROAD) notBreakQ.push(make_pair(0, 0));
    else wallBreakQ.push(make_pair(0, 0));
    while (!notBreakQ.empty())
    {
        P cur = notBreakQ.front(); notBreakQ.pop();
        f(dir, 4)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 인덱스 범위 체크
            if (nx >= m || nx < 0 || ny >= n || ny < 0) continue;
            // 방문한 적이 있는지 체크
            if (notBreakDist[ny][nx] != -1) continue;
            if (map[ny][nx] == WALL)
            {
                if (wallBreakDist[ny][nx] == -1)
                {
                    wallBreakDist[ny][nx] = notBreakDist[cur.Y][cur.X] + 1;
                    wallBreakQ.push(make_pair(ny, nx));
                }
                continue;
            }
            notBreakDist[ny][nx] = notBreakDist[cur.Y][cur.X] + 1;
            notBreakQ.push(make_pair(ny, nx));
        }
    }
    while (!wallBreakQ.empty())
    {
        P cur = wallBreakQ.front(); wallBreakQ.pop();
        f(dir, 4)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 인덱스 범위 체크
            if (nx >= m || nx < 0 || ny >= n || ny < 0) continue;
            if (map[ny][nx] == WALL) continue;
            if (wallBreakDist[ny][nx] != -1 && wallBreakDist[cur.Y][cur.X] >= wallBreakDist[ny][nx]) continue;
            wallBreakDist[ny][nx] = wallBreakDist[cur.Y][cur.X] + 1;
            wallBreakQ.push(make_pair(ny, nx));
        }
    }
    if (notBreakDist[n - 1][m - 1] == -1) cout << wallBreakDist[n - 1][m - 1] << '\n';
    else if (wallBreakDist[n - 1][m - 1] == -1) cout << notBreakDist[n - 1][m - 1] << '\n';
    else if (notBreakDist[n - 1][m - 1] < wallBreakDist[n - 1][m - 1]) cout << notBreakDist[n - 1][m - 1] << '\n';
    else cout << wallBreakDist[n - 1][m - 1] << '\n';
    return 0;
}
```
아마 첫 BFS 때 큐에 너무 많은 노드를 집어넣어서거나 두 번째 BFS의 `if (wallBreakDist[ny][nx] != -1 && wallBreakDist[cur.Y][cur.X] >= wallBreakDist[ny][nx]) continue;` 이 부분 때문에 메모리 초과가 났을 것이다.

## References
- [18% 에서 틀리시는 분들 반례](https://www.acmicpc.net/board/view/140221)
