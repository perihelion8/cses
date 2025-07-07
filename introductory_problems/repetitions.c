#include <stdio.h>

int	main(void)
{
	char			input[1000001];
	char			*ptr;
	unsigned long	count;
	unsigned long	max;

	if (scanf("%s", input) != 1)
		return (1);
	count = 1;
	max = 1;
	ptr = input;
	while (*ptr != '\0')
	{
		if (*ptr == *(ptr + 1))
		{
			count++;
			if (count > max)
				max = count;
		}
		else
			count = 1;
		ptr++;
	}
	printf("%lu", max);
	return (0);
}
