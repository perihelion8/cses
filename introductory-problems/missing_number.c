#include <stdio.h>

typedef unsigned int	uint;
typedef unsigned long	ulong;

int main(void)
{
	uint	current_number;
	uint	i;
	ulong	n;
	ulong	actual_sum;
	ulong	expected_sum;

	if (scanf("%lu", &n) != 1)
		return (1);
	actual_sum = 0;
	for (i = 0; i < n -1; i++)
	{
		if (scanf("%u", &current_number) != 1)
			return (1);
		actual_sum += current_number;
	}
	expected_sum = n * (n + 1) / 2;
	printf("%lu", expected_sum - actual_sum);
	return (0);
}
