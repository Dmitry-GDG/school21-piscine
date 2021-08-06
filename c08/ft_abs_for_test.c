#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	printf("The absolut value of %d is %d\n", 300, ABS(300));
	printf("The absolut value of %d is %d\n", -50, ABS(-50));
	printf("The absolut value of %d is %d\n", -500, ABS(-500));
	printf("The absolut value of %d is %d\n", 0, ABS(0));
	return (0);
}
/* call it:
* gcc -Wall -Wextra -Werror ft_abs_for_test.c && ./a.out */
