#ifndef SORT_HPP
#define SORT_HPP

#include <chrono>
#include <iostream>
#include <random>

using namespace std;

const int* const makeRandomArr(const int N);
void printArr(const int* const arr);
void benchmark(const int* const arr, void (*sort)(int* const));
int* const deepCopy(const int* const arr);

void bubbleSort(int* const arr);
void selectionSort(int* const arr);
void insertionSort(int* const arr);
void mergeSort(int* const arr);
void quickSort(int* const arr);
void radixSort(int* const arr);

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

#endif
