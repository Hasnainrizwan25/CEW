


#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 3, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array: ");

    for (int i = 0; i < n; i++) {
        int isUnique = 1;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
