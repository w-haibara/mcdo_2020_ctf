#include <stdio.h>
#include <stdlib.h>

char binsh[] = "/bin/sh";

void vuln() {
	printf("binsh addr:%p\n", binsh);

	char buf[32];
	scanf("%[^\n]", buf);
}

int main() {
	vuln();
	printf("failed...\n");
	return 0;
}
