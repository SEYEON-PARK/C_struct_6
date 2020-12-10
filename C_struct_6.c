#include <stdio.h>

struct happy {
	int a;
	char b;
};

int main(void)
{
	struct happy H;
	H.a = 7;
	H.b = 'H';

	printf("%d %c\n", H.a, H.b);

	return 0;
}