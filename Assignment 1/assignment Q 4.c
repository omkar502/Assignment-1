#include <stdio.h>

int main() {
    int no = 10;      
    int another = 20; 
    int temp;         

    printf("Before swapping: no = %d, another = %d\n", no, another);

    temp = no;
    no = another;
    another = temp;

    printf("After swapping: no = %d, another = %d\n", no, another);

    return 0;
}