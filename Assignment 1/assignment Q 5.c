#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    average = sum / 5.0;

    
    printf("Average of the five numbers is: %.2f\n", average);

    return 0;
}