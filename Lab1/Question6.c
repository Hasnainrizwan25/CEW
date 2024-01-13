
#include <stdio.h>

int table(int val) {
    for (int i=1; i<11; i++){
        printf("%d x %d = %d\n", val, i, val*i);
    }
}

int main() {
    int val, a = 1, b = 1;

    printf("Enter: ");
    scanf("%d", &val);
    table(val);



    return 0;
}
