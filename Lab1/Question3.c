#include <stdio.h>

int main() {
    float Height;
    printf("Enter Your Height: ");
    scanf("%f", &Height);

    if(Height < 150) {
        printf("Dwarf");
    } else if (Height >= 150 && Height < 165) {
        printf("Average");
    } else if (Height >= 165) {
        printf("Tall");
    } else {
        printf("False");
    }

}
