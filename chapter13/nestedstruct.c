#include <stdio.h>
#include <string.h>

struct date
{
	int year;
	int month;
	int day;
};

struct account {
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void) {
	struct account me = { {2020, 5, 29}, "ȫ�浿", 1001, 300000 };

	printf("����üũ��: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
}