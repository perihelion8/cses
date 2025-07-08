#include <stdio.h>

int	main(void)
{
	unsigned int	previous;
	unsigned int	current;
	unsigned int	n;
	unsigned int	i;
	unsigned long	sum;

	if (scanf("%u", &n) != 1)
		return (1);
	if (scanf("%u", &previous) != 1)
		return (1);
	sum = 0;
	i = 1;
	while (i < n)
	{
		if (scanf("%u", &current) != 1)
			return (1);
		if (current < previous)
		{
			sum += previous - current;
			current += previous - current;
		}
		previous = current;
		i++;
	}
	printf("%lu", sum);
}
