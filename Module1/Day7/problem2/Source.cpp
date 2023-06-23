#include <stdio.h>
#include <ctype.h>

#define BUFFER_SIZE 4096

void convertToUpper(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLower(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void convertToPureUpper(char* str) {
    int i = 0;
    while (str[i]) {
        if (isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
        }
        i++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./cp [option] source_file target_file\n");
        return 1;
    }

    char* option = argv[1];
    char* sourcePath = argv[2];
    char* targetPath = argv[3];

    FILE* sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    FILE* targetFile = fopen(targetPath, "w");
    if (targetFile == NULL) {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (strcmp(option, "-u") == 0) {
            convertToUpper(buffer);
        }
        else if (strcmp(option, "-l") == 0) {
            convertToLower(buffer);
        }
        else if (strcmp(option, "-s") == 0) {
            convertToPureUpper(buffer);
        }
        fwrite(buffer, 1, bytesRead, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
