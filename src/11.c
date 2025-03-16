#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[20];
    int age;
    float gpa;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    if (age < 0 || age > 150) {
        printf("Invalid age\n");
        return 0;
    } else if (gpa < 0 || gpa > 4.0) {
        printf("Invalid GPA\n");
        return 0;
    } else {
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("GPA: %.2f\n", gpa);
    }
}
