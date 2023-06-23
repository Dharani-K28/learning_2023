#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_SIZE 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractDataFromCSV(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_SIZE];

    // Skip the header line
    fgets(line, MAX_LINE_SIZE, file);

    while (fgets(line, MAX_LINE_SIZE, file) != NULL && numEntries < MAX_ENTRIES) {
        // Tokenize the line
        char* token = strtok(line, ",");

        logEntries[numEntries].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].sensorNo, token);
        token = strtok(NULL, ",");
        logEntries[numEntries].temperature = atof(token);
        token = strtok(NULL, ",");
        logEntries[numEntries].humidity = atoi(token);
        token = strtok(NULL, ",");
        logEntries[numEntries].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].timestamp, token);

        numEntries++;
    }

    fclose(file);
}

void displayLogEntries() {
    if (numEntries == 0) {
        printf("No log entries found.\n");
        return;
    }

    printf("Log Entries:\n");
    printf("---------------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        LogEntry entry = logEntries[i];
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", entry.entryNo, entry.sensorNo, entry.temperature, entry.humidity, entry.light, entry.timestamp);
    }

    printf("---------------------------------------------------------\n");
}

int main() {
    const char* filename = "data.csv";
    extractDataFromCSV(filename);
    displayLogEntries();

    return 0;
}
