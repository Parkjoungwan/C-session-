#include <stdio.h>

int main() {
	char a[6] = "Korea";
	printf("%s\n", a);
	for (int i = 0; i<5; i++)
	{
		printf("��: %c\n", a[i]);
	}
}