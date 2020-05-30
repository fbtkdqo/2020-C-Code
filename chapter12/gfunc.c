void teststatic()
{
	//정적 전역변수는 선언 및 사용이 불가능
}

void testglobal()
{
	extern gvar;
	gvar = 10;
}