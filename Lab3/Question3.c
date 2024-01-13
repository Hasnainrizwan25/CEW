
#include <stdio.h>
#include <stdlib.h>
int *arr;

void inputArray(int size)
{

    arr = (int*)malloc(size * sizeof(int));

    for (int i=0; i<size; i++)
    {
        printf("Array Position %d ", i);
        scanf("%d", (arr + i));
    }
}

void printArray(int size)
{

    for(int i=0; i<size; i++)
    {
        printf("%d ", *arr);
        arr ++;
    }
}

int main()
{


    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);

    inputArray(size);
    printArray(size);

    return 0;
}
