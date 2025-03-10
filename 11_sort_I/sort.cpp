#include "sort.hpp"

const int N = 10;

int main(void)
{
    const int* const arr = makeRandomArr(N);

    cout << "Bubble Sort\n";
    benchmark(arr, bubbleSort);
    cout << "Selection Sort\n";
    benchmark(arr, selectionSort);
    cout << "Insertion Sort\n";
    benchmark(arr, insertionSort);
    cout << "Merge Sort\n";
    benchmark(arr, mergeSort);

    // delete arr;
    return 0;
}

const int* const makeRandomArr(const int N)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dis(0, 1000);

    int* arr = new int[N];
    for (size_t i = 0; i < N; ++i)
        arr[i] = dis(rng);

    printArr(arr);
    return arr;
}

void printArr(const int* const arr)
{
    for (size_t i = 0; i < N; ++i)
        cout << arr[i] << ' ';
    cout << '\n';
}

void benchmark(const int* const arr, void (*sort)(int* const))
{
    int* const newArr = deepCopy(arr);

    auto start = chrono::high_resolution_clock::now();
    sort(newArr);
    auto end = chrono::high_resolution_clock::now();
    // printArr(newArr);

    chrono::duration<double, std::milli> ms = end - start;
    std::cout << aec::fg::GREEN << ms.count() << "ms\n\n" << aec::RESET;
    delete newArr;
}

int* const deepCopy(const int* const arr)
{
    int* newArr = new int[N];
    for (size_t i = 0; i < N; i++)
        newArr[i] = arr[i];
    return newArr;
}

/* Sort with O(n^2) */

void selectionSort(int* const arr)
{
    // n * n / 2 = n^2 / 2
    for (size_t i = 0; i < N; ++i)
    {
        size_t min = i;
        for (size_t j = i + 1; j < N; ++j)
            if (arr[min] > arr[j])
                min = j;
        swap(arr[i], arr[min]);
    }
}

void bubbleSort(int* const arr)
{
    // {(n - 1) + (n - 2) + ...} = n * (n - 1) / 2
    for (size_t i = 0; i < N; ++i)
        for (size_t j = 0; j < N - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void insertionSort(int* const arr)
{
    // (0 ~ i - 1) 이미 정렬되었다고 가정됨
    for (int i = 1; i < N; ++i)
    {
        // 이미 정렬된 배열과 비교
        const int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

/* Sort with O(NlogN) */

static void merge(int* const arr, int first, int mid, int last)
{
    cout << "first: " << first << " mid: " << mid << " last: " << last << '\n';
    int sorted[last - first + 1];
    int i, j, k;
    i = first;    // First arr idx
    j = mid + 1;  // Second arr idx
    k = 0;        // Sorted arr idx

    while (i <= mid && j <= last)
    {
        if (arr[i] <= arr[j])
            sorted[k++] = arr[i++];
        else
            sorted[k++] = arr[j++];
    }

    if (i > mid)
        while (j <= last)
            sorted[k++] = arr[j++];
    else
        while (i <= mid)
            sorted[k++] = arr[i++];

    for (i = first, k = 0; i <= last; i++, k++)
        arr[i] = sorted[k];
}

static void divide(int* const arr, const int first, const int last)
{
    if (first < last)
    {
        const int mid = (first + last) / 2;
        divide(arr, first, mid);
        divide(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

// void mergeSort(int* const arr, const int first, const int last)
void mergeSort(int* const arr)
{
    divide(arr, 0, N - 1);
}

void quickSort(int* const arr)
{
}

void radixSort(int* const arr)
{
}
