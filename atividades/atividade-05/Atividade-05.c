#include <stdio.h>
#include <string.h>

int main() {
    // 1. Create a file to store text lines
    FILE *fp;
    fp = fopen("text_file.txt", "w"); // Open in write mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256]; // Buffer to store input line

    // 2. Feed the file with data entered from the keyboard
    printf("Enter lines of text (type 'exit' to finish):\n");
    while (1) {
        printf("> ");
        fgets(line, sizeof(line), stdin); // Read input line

        // Check if user wants to exit
        if (strcmp(line, "exit\n") == 0) {
            break;
        }

        // 3. Write the input line to the file
        fputs(line, fp);
    }

    // 5. Close the file
    fclose(fp);

    // 6. Open the file in read mode
    fp = fopen("text_file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 7. Read each line from the file and display it
    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // 8. Close the file
    fclose(fp);

    return 0;
}