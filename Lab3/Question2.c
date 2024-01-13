
#include <stdio.h>
#include <string.h>

void reverseString(char *arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", *arr);
        arr++;
    }
    printf("\n");
}

int main() {
    char string[] = "Hasnain";

    int n = strlen(string);

    reverseString(string, n);

    return 0;
}
