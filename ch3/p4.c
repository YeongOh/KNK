#include <stdio.h>

int main(void)
{
	int area_code;
	int num1;
	int num2;
	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &area_code, &num1, &num2);
	printf("You entered %3d.%3d.%4d\n", area_code, num1, num2);
	return 0;
}
