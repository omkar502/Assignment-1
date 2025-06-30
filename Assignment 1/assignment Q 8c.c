#include <stdio.h>

int main() {
    int no = 10;      
    float length, width, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}