#include <stdio.h>

int main(void) {
	char c[] = "C C++ Java";
	printf("%s\n", c);
	c[5] = '\0';
	printf("%s\n%s\n", c, (c + 6));

	c[5] = ' ';
	char *p = c;
	while (*p) //(*p != '\0')로 대체 가능
		printf("%c", *p++);
	printf("\n");

	return 0;

}