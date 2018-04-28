/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strcmp
*/

#include "tests.h"

Test(strcmp, basic, .init = init)
{
	char	*s1 = "Yes, you are";
	char	*s2 = "a fucking sandwich !";

	cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
	cr_assert(my_strcmp(s2, s1) == strcmp(s2, s1));
}

Test(strcmp, empty_string, .init = init)
{
	char	*s1 = "";
	char	*s2 = "Hello World!";

	cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
	cr_assert(my_strcmp(s2, s1) == strcmp(s2, s1));
	cr_assert(my_strcmp(s2, s2) == strcmp(s2, s2));
}

Test(strcmp, empty_string2, .init = init)
{
	char	*s1 = "Hello World!";
	char	*s2 = "";

	cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
	cr_assert(my_strcmp(s2, s1) == strcmp(s2, s1));
	cr_assert(my_strcmp(s2, s2) == strcmp(s2, s2));
}

Test(strcmp, full_null, .init = init)
{
	char	*s1 = "";
	char	*s2 = "";

	cr_assert(my_strcmp(s1, s2) == strcmp(s1, s2));
	cr_assert(my_strcmp(s2, s1) == strcmp(s2, s1));
	cr_assert(my_strcmp(s2, s2) == strcmp(s2, s2));
}

Test(strcmp, same, .init = init)
{
	char	*s1 = "sandwich";

	cr_assert(my_strcmp(s1, s1) == strcmp(s1, s1));
}
