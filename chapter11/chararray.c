#include <stdio.h>

int main(void) {
	char ch = 'A';
	printf("%c %d\n", ch, ch);
	//规过1
	char java[] = { 'J', 'A', 'V', 'A', '\0' };
	printf("%s\n", java);
	//规过2
	char c[] = "C languege";
	printf("%s\n", c);
	//规过3

	char csharp[5] = "C#";
	printf("%s\n", csharp);

	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}