#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];


    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        exit(1);
    }
    fprintf(file, "This is the initial content.\n");
    fclose(file);
    printf("File created and initial content written.\n");


    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        exit(1);
    }
    fprintf(file, "This is appended content.\n");
    fclose(file);
    printf("Data appended to the file.\n");

 
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("File content:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}

