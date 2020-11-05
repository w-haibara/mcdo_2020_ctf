#include <stdio.h>

void vuln() {
	char buf[128];
	printf("%p\n", buf);
	scanf("%[^\n]", buf);
}

int main() {
	vuln();
	printf("failed...\n");
	return 0;
}
