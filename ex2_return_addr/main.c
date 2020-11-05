#include <stdio.h>

void printFlag() {
	printf("FLAG{22222222}\n");
}

void vuln() {
	char buf[4];
	scanf("%[^\n]", buf);
}

int main() {
	vuln();

	printf("failed...\n");

	return 0;
}
