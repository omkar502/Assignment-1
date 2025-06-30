#include <stdio.h>

int main() {
    int no = 10;           // Celsius temperature
    float fahrenheit;

    // Convert Celsius to Fahrenheit
    fahrenheit = (no * 9.0 / 5.0) + 32;

    // Print the result
    printf("%d Celsius is %.2f Fahrenheit\n", no, fahrenheit);

    return 0;
}