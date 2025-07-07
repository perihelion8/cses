#include <stdio.h>

int	main(void)
{
	unsigned long	n;

	if (scanf("%lu", &n) != 1)
		return (1);
	while (n != 1)
	{
		printf("%lu ", n);
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
	printf("1");
	return (0);
}
