/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** memcpy
*/

#include "tests.h"

Test(memcpy, basic, .init = init)
{
	char	*test = strdup("test");
	char	*test2 = strdup("test");
	char	*copy = strdup("copy");
	char	*copy2 = strdup("copy");

	cr_assert(!strcmp(memcpy(test, copy, 4), my_memcpy(test2, copy2, 4)));
}

Test(memcpy, empty_string, .init = init)
{
	char	*test = strdup("I'm a sandwich");
	char	*test2 = strdup("");

	cr_assert(my_memcpy(test, test2, 10) == test);
}

Test(memcpy, empty_string2, .init = init)
{
	char	*test = strdup("");
	char	*test2 = strdup("I'm a sandwich");

	cr_assert(my_memcpy(test, test2, 10) == test);
}

Test(memcpy, full_null, .init = init)
{
	char	*test = strdup("");
	char	*test2 = strdup("");

	cr_assert(my_memcpy(test, test2, 1) == test);
}

Test(memcpy, return_value, .init = init)
{
	char	*test = strdup("test");
	char	*test2 = strdup("bite");

	cr_assert(memcpy(test, test2, 4) == my_memcpy(test, test2, 4));
}
