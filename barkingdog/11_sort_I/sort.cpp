#include <iostream>
#include <random>
#include <chrono>

using namespace std;

static void bubbleSort(int* arr);
static void selectionSort(int* arr);
static void insertionSort(int* arr);
static void benchmark(void (*sort)(int*));
static int* make_random_arr(void);
static void print_arr(const int* arr);

/* ANSI Escape Codes */
namespace aec
{
    namespace fg
    {
        const char* BLACK = "\033[30m";
        const char* RED = "\033[31m";
        const char* GREEN = "\033[32m";
        const char* YELLOW = "\033[33m";
        const char* BLUE = "\033[34m";
        const char* MAGENTA = "\033[35m";
        const char* CYAN = "\033[36m";
        const char* WHITE = "\033[37m";
    }  // namespace fg
    namespace bg
    {
        const char* BLACK = "\033[40m";
        const char* RED = "\033[41m";
        const char* GREEN = "\033[42m";
        const char* YELLOW = "\033[43m";
        const char* BLUE = "\033[44m";
        const char* MAGENTA = "\033[45m";
        const char* CYAN = "\033[46m";
        const char* WHITE = "\033[47m";
    }  // namespace bg
    namespace st
    {
        const char* REGULAR = "\033[0m";
        const char* BOLD = "\033[1m";
        const char* FAINT = "\033[2m";
        const char* ITALIC = "\033[3m";
        const char* UNDERLINE = "\033[4m";
        const char* BLINK = "\033[5m";
        const char* RAPID_BLINK = "\033[6m";
        const char* REVERSE = "\033[7m";
        const char* HIDDEN = "\033[8m";
        const char* STRIKE_THROUGH = "\033[9m";
    }  // namespace st
    const char* RESET = "\033[0m";
}  // namespace aec

const int N = 100;

int main(void)
{
    cout << "Bubble Sort\n";
    benchmark(bubbleSort);
    cout << "Selection Sort\n";
    benchmark(selectionSort);
    cout << "Insertion Sort\n";
    return 0;
}

void benchmark(void (*sort)(int*))
{
    int* arr = make_random_arr();

    // print_arr(arr);
    auto start = chrono::high_resolution_clock::now();
    sort(arr);
    auto end = chrono::high_resolution_clock::now();
    // print_arr(arr);

    chrono::duration<double, std::milli> ms = end - start;
    std::cout << aec::fg::GREEN << ms.count() << "ms\n\n" << aec::RESET;
    delete arr;
}


// O(n^2)
void selectionSort(int* arr)
{
    // n * n / 2 = n^2 / 2
    for (size_t i = 0; i < N; ++i)
    {
        size_t min = i;
        for (size_t j = i + 1; j < N; ++j)
            if (arr[min] > arr[j]) min = j;
        swap(arr[i], arr[min]);
    }
}

// O(n^2)
void bubbleSort(int* arr)
{
    // {(n - 1) + (n - 2) + ...} = n * (n - 1) / 2
    for (size_t i = 0; i < N; ++i)
        for (size_t j = 0; j < N - i - 1; ++j)
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
}

// O(n^2)
/* 
5 2 9 1 6
^

5 2 9 1 6
  ^
2 5 9 1 6

2 5 9 1 6
    ^

2 5 9 1 6
      ^
1 2 5 9 6

1 2 5 9 6
        ^
1 2 5 6 9

 */
void insertionSort(int* arr)
{
    // cursor
    for (size_t i = 0; i < N; ++i)
    {
        // 이미 정렬된 배열의 앞, 중간, 뒤
        for (size_t j = 0; j < i; j++)
        {
            
        }
    }
    
}

int* make_random_arr()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dis(-1000, 1000);

    int* arr = new int[N];
    for (size_t i = 0; i < N; ++i)
        arr[i] = dis(rng);
    return arr;
}

void print_arr(const int* arr)
{
    for (size_t i = 0; i < N; ++i)
        cout << arr[i] << ' ';
    cout << '\n';
}
