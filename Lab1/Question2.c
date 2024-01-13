
#include <stdio.h>

int main() {
    // Write C code here
    float height, Width;
    printf("Enter Height: ");
    scanf("%f", &height);
    printf("Enter Width: ");
    scanf("%f", &Width);
    float perimeter = 2*(height+Width);
    float Area = height*Width;
    printf("Perimeter: %.2f\nArea: %.2f\n", perimeter, Area);

    return 0;
}
