#include <stdio.h>
#include <stdlib.h>

int counT(char* name)
{
    FILE* fileptr;
    int c = 0;
    fileptr = fopen(name, "r");
    int ch;
    if (fileptr == NULL)
    {
        fclose(fileptr);
    }

    while((ch=getc(fileptr)) != EOF)
    {
        c ++;
        printf("%c ", ch);

    }

    fclose(fileptr);
    return c;
}

int main()
{
    char name[100] = "new.txt";
    printf("%d ",counT(name));
    return 0;
}
