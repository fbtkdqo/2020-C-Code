#include <stdio.h>

int main(void) {
	typedef struct movie
	{
		char* title;
		int attendance;
	} movie;
	movie assassination;

	assassination.title = "�ϻ�";
	assassination.attendance = 12700000;

	pritnf("[%s] ������: %d\n", assassination.title, assassination.attendance);
	
	return 0;
}