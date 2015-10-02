#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define DATA_FILE_PATH "/home/username/c_pr/cartoon-browser/data"
#define LINE_LENGTH 1000
#define LINE_COUNT 1000

void readData() {
	char line[LINE_LENGTH];
	char lines[LINE_COUNT][LINE_LENGTH];

	FILE *dataFile = fopen(DATA_FILE_PATH, "r+");
	
	if (dataFile != NULL) {
		for (int i = 0; fgets(line, LINE_LENGTH, dataFile) != NULL; i++) {
			strcpy(lines[i], line);
			printf("%s", line);
		}
		fclose(dataFile);
	}
}
