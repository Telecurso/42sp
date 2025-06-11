#include <unistd.h>

void	abc(void)
{
	char c;

	c = 65;
	while(c <= 67)
	{
		write(1, &c,1);
		c++;
	}
}

int	main(void)
{
	abc();
	return(0);
}
