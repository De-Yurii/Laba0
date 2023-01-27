#include <stdio.h>
#include <conio.h>
int main()
{
	char name[15];
	printf("Enter your name: ");
	scanf_s("%s", &name, 15);
	printf("Hello ""%s""! You are welcome to C world\r\n", name);
}
