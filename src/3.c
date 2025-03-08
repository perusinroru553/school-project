#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number = rand() % 10 + 1;
    printf("The random number is: %d\n", number);
    return 0;
}
