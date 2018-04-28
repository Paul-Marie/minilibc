/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** memmove
*/

#include "tests.h"

Test(memmove, basic, .init = init)
{
	char	*test = strdup("test");
	char	*test2 = strdup("test");
	char	*copy = strdup("copy");
	char	*copy2 = strdup("copy");

	cr_assert(!strcmp(memmove(test, copy, 4), my_memmove(test2, copy2, 4)));
}

Test(memmove, empty_string, .init = init)
{
	char	*test = strdup("I'm a sandwich");
	char	*test2 = strdup("");

	cr_assert(my_memmove(test, test2, 1) == test);
}

Test(memmove, empty_string2, .init = init)
{
	char	*test = strdup("");
	char	*test2 = strdup("I'm a sandwich");

	cr_assert(my_memmove(test, test2, 1) == test);
}

Test(memmove, full_null, .init = init)
{
	char	*test = strdup("");
	char	*test2 = strdup("");

	cr_assert(my_memmove(test, test2, 1) == test);
}

Test(memmove, return_value, .init = init)
{
	char	*test = strdup("memmove can be very usefull.........");

	cr_assert(memmove(test + 15, test + 20, 11)
		  == my_memmove(test + 15, test + 20, 11));
}
