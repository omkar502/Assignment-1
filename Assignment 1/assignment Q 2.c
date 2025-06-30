#include <stdio.h>

int main() {
    int no = 10;                
    float area;
    const float PI = 3.1416;    

    area = PI * no * no;

    printf("The area of the circle with radius %d is %.2f\n", no, area);

    return 0;
}