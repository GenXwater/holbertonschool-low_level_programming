#include <stdio.h>

void print(int nb)
{	
	if (nb < 0)
	{
		return nb;
	}
	printf("%d", nb + (nb - 1));
	nb--;
	print(nb);
}

int main(void)
{
	print(4);
	printf("\n");
}
