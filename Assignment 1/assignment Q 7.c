
#include <stdio.h>

int main() {
    int no = 10;      
    int hours, minutes;

    hours = no / 60;
    minutes = no % 60;
    
    printf("%d minutes is %d hour(s) and %d minute(s)\n", no, hours, minutes);

    return 0;
}
