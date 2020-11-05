#include <stdio.h>

int main() {
	int val = 0;
	char buf[4];

	scanf("%s", buf);

	if (val == 0) {
		printf("failed...\n");
	} else {
		printf("FLAG{11111111}\n");
	}

	return 0;
}
