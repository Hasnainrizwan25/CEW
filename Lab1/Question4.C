#include <stdio.h>
#include <string.h>


int conversion(int dec, char* str, char* str2) {
    if (dec != 0) {
        int binaryno = dec%2;
        sprintf(str2, "%d", binaryno);
        strcat(str, str2);
        return conversion(dec/2, str, str2);
    }
}

int main() {
    int val;
    printf("Enter Decimal Number: ");
    scanf("%d", &val);
    char str[2000];
    char str2[20000];

    conversion(val, str, str2);

    int length = strlen(str);

    for (int i = length-1; i >=0 ; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
