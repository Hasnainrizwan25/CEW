
#include <stdio.h>
#include <stdlib.h>
void createFile(char* name) {
    FILE* fileptr;
    fileptr = fopen(name, "w");

    if (fileptr != NULL) {
        printf("Successfully Created\n");
        fclose(fileptr);
    } else {
        printf("Some Error Occurred\n");
    }
}
void read(char* name) {
    FILE* fileptr;
    fileptr = fopen(name, "r");

    if (fileptr == NULL) {
        printf("File Not Found!\n");
        return;
    }
    char myString[1000];
    while (fgets(myString, sizeof(myString), fileptr)) {
        printf("%s", myString);
    }
    fclose(fileptr);
}
void write(char* name) {
    FILE* fileptr;
    fileptr = fopen(name, "a");
    if (fileptr == NULL) {
        printf("File Not Found!\n");
        return;
    }
    char myString[1000];
    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);
    fprintf(fileptr, "%s", myString);
    fclose(fileptr);
    printf("Successfully Wrote!\n");
}
int main() {
    char* name = "Q.txt";
   // createFile(name);
    write(name);
    read(name);
    return 0;
}
