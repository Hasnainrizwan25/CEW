
#include <stdio.h>
#include <stdlib.h>


int searchInArray(int* arr, int query)
{


    for (int i = 0; i<9; i++)
    {
        if (query == *arr)
        {
            return i;
        }
        arr++;
    }

    return -1;

}

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};

    int res = searchInArray(array, 2);
    if (res == 1)
    {
        printf("Element Found In An Array At %d: ",res);
    }
    else if (res == -1)
    {
        printf("Not Found! ");
    }

    return 0;
}
