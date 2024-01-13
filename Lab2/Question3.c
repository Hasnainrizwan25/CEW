
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[] = "Owais";
    char str2[] = "wais";
    bool flag = true;

    if (strlen(str1) == strlen(str2))
    {
        for (int i = 0; i < sizeof(str1)/sizeof(char); i++)
    {
        if (str1[i] != str2[i])
        {
            flag = false;
            break;
        }
    }

    }
    else
    {
        flag = false;
    }


    if (flag)
    {
        printf("Equal");

    }
    else if (flag == false)
    {
        printf("Not Equal");
    }
    return 0;
}
