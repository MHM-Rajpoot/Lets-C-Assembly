
#include <stdio.h>
#include <windows.h>

// Iterative Factorial
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive Factorial
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    else {
        return n * factorial_recursive(n - 1); // Recursive call
    }
}

int main() {

    int num = 65;

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else {
        LARGE_INTEGER frequency, start_iterative, end_iterative, start_recursive, end_recursive;

        // Get the frequency of the high-resolution performance counter
        QueryPerformanceFrequency(&frequency);

        // Measure time for Iterative Factorial
        QueryPerformanceCounter(&start_iterative);
        unsigned long long fact_iterative = factorial_iterative(num);
        QueryPerformanceCounter(&end_iterative);

        // Measure time for Recursive Factorial
        QueryPerformanceCounter(&start_recursive);
        unsigned long long fact_recursive = factorial_recursive(num);
        QueryPerformanceCounter(&end_recursive);

        // Calculate elapsed time in nanoseconds
        long long time_iterative_ns = (end_iterative.QuadPart - start_iterative.QuadPart) * 1000000000LL / frequency.QuadPart;
        long long time_recursive_ns = (end_recursive.QuadPart - start_recursive.QuadPart) * 1000000000LL / frequency.QuadPart;

        printf("Results:\n");
        printf("---------\n");
        printf("Iterative Factorial of %d = %llu\n", num, fact_iterative);
        printf("Time taken: %lld nanoseconds\n", time_iterative_ns);
        printf("Recursive Factorial of %d = %llu\n", num, fact_recursive);
        printf("Time taken: %lld nanoseconds\n", time_recursive_ns);
    }

    return 0;
}
