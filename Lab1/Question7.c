#include <stdio.h>



int main() {
    int x, y;

    printf("Enter: ");
    scanf("%d", &x);
    scanf("%d", &y);


    if (x > 5 && y > 5) {
        printf("x+y = %d", x+y);
    } else if (x > 5 || y > 5) {
        printf("x*y = %d", x*y);
    } else {
        printf("Hello World");
    }



    return 0;
}
