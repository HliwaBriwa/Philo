#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*ptr;
	int	a;

	a = 0;

	ptr = malloc(sizeof(char) * 4);

	ptr[0] = '1';
	ptr[1] = '2';
	ptr[2] = '3';
	ptr[3] = '4';

	while (a < 4)
	{
		write (1, ptr++, 1);
		fflush(stdout);
		a++;
	}
}
