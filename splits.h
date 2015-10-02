#include <string.h>

struct StringList {
	char **strings;
	int length;
};
struct StringList splits(char *string, char *delimeter) {
	char **target;
	char *token = strtok(string, delimeter);
	int i = 0;
	for (; token; i++) {
		strcpy(target[i], token);
		token = strtok(NULL, delimeter);
	}
	struct StringList s = {target, i};
	return s;
}
