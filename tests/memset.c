/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** memset
*/

#include "tests.h"

Test(memset, basic, .init = init)
{
	char	*str = malloc(100);
	char	*ret;

	ret = my_memset(str, 0, 100);	
	cr_assert(str == ret); 
	for (uint8_t i = 0; i < 100; i++)
		cr_assert(!str[i]); 
	free(str);
}

Test(memset, size_zero, .init = init)
{
	char	*str = malloc(100);
	char	*ret = NULL;

	ret = my_memset(str, 'a', 0);	
	cr_assert(str == ret); 
	free(str);
}

Test(memset, multiple_use, .init = init)
{
	char	*str = malloc(100);

	cr_assert(my_memset(str, 'A', 100) == memset(str, 'A', 100));
	cr_assert(my_memset(str, 'B', 80) == memset(str, 'B', 80));
	cr_assert(my_memset(str, 'C', 60) == memset(str, 'C', 60));
	cr_assert(my_memset(str, 'D', 40) == memset(str, 'D', 40)); 
	cr_assert(my_memset(str, 'E', 20) == memset(str, 'E', 20)); 
	free(str);
}

Test(memset, bigger, .init = init)
{
	char	*str = malloc(100);

	cr_assert(my_memset(str, 'B', 101) == memset(str, 'B', 101));
	free(str);
}
