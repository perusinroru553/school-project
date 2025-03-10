#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[20];
    int age;

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.");
    } else {
        printf("Sorry, you are not eligible to vote yet.");
    }

    return 0;
}
