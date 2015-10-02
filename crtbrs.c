#include <stdio.h>
#include "read_data.h"
#include "splits.h"

int main() {
	readData();
	printf("test");
	struct StringList stringList = splits("0\ttrtr\topop/tr/rtr", "\t");
	printf("%d", stringList.length);
}
