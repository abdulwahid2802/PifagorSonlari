#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n;
	scanf_s(" %d", &n);
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			for (int k = 1; k <= i; k++)
				if (i*i == (k*k + j * j))
					printf("%d^2 + %d^2 = %d^2\n", k, j, i);



	// Fcatorial 2-10 printing
	/*for (int i = 2; i <= 10; i++)
	{
		printf("%d!=", i);
		int fact = i;
		for (int j = 1; j < i; j++)
		{
			printf("%d*", j);
			fact *= j;
		}

		printf("%d=%d\n", i, fact);
	}*/

	_getch();
	return 0;
}