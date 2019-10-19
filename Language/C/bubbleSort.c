#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* helper method to handle failures. perror knows how to interperet errno */
void die(const char *message) {
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }
    exit(1);
}

// typedef creates a type - often used with structs or function pointer types
typedef int (*compare_cb)(int a, int b);

int *bubble_sort(int *numbers, int n, compare_cb cmp) {
    int tmp, i, j;
    int *target = malloc(sizeof(int) * n);
    if (!target) die("Memory error");
    // memcpy(t, s, n) takes a byte-for-byte of n bytes of memory from s to t
    memcpy(target, numbers, sizeof(int) * n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (cmp(target[j], target[j+1]) > 0) {
                tmp = target[j];
                target[j] = target[j+1];
                target[j+1] = tmp;
            }
        }
    }

    return target;
}

int forward_compare(int a, int b) {
    return a - b;
}

int reverse_compare(int a, int b) {
    return b - a;
}

// don't worry about understanding this, it's strange. It's not symmetric.
int strange_compare(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return a % b;
}

/* utility to print the results from sorting `numbers` using `cmp` */
void try_sort(int *numbers, int n, compare_cb cmp) {
    int *sorted = bubble_sort(numbers, n, cmp);
    // if bubble_sort failed to alloc it should have already died, but it's
    // good to code defensively in C
    if (!sorted) die("Failed to sort as requested.");
    int i;
    for (i = 0; i < n; i++) {
        printf("%i ", sorted[i]);
    }
    printf("\n");
    free(sorted);
}

int main(int argc, char* argv[]) {
    if (argc < 2) die("Usage: %s <list of space-separated integers>");
    int n = argc - 1, i = 0;
    int *numbers = malloc(n * sizeof(int));
    if (!numbers) die("Memory error");
    // note the pointer arithmetic
    char **inputs = argv + 1;

    for (i = 0; i < n; i++) {
        // if inputs[i] doesn't start with digits, atoi returns 0 (try it)
        numbers[i] = atoi(inputs[i]);
    }

    // note that a function is automatically promoted to a pointer if used
    // as an argument (much like arrays, no need to use &)
    try_sort(numbers, n, forward_compare);
    try_sort(numbers, n, reverse_compare);
    try_sort(numbers, n, strange_compare);

    free(numbers);
    return 0;
}
