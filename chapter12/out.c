#include <stdio.h>

void outfunction() {
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);

	//++sglobal 은 정적 전역변수이므로 실행 시 오류
}