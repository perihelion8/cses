#include <stdio.h>

int	main(void)
{
	unsigned int	current_number;
	unsigned int	i;
	unsigned long	n;
	unsigned long	actual_sum;
	unsigned long	expected_sum;

	if (scanf("%lu", &n) != 1)
		return (1);
	actual_sum = 0;
	i = 0;
	while (i < n - 1)
	{
		if (scanf("%u", &current_number) != 1)
			return (1);
		actual_sum += current_number;
		i++;
	}
	expected_sum = n * (n + 1) / 2;
	printf("%lu", expected_sum - actual_sum);
	return (0);
}
