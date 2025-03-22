#include <stdio.h>

void print_odd_numbers(int upper_limit) {
    int i;
    printf("Odd numbers up to %d: ", upper_limit);
    for (i = 1; i <= upper_limit; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}

int main() {
    print_odd_numbers(50);
    return 0;
}
