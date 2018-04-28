/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strncmp
*/

#include "tests.h"

Test(strncmp, basic, .init = init)
{
	char	*s1 = "Yes, you are";
	char	*s2 = "a fucking sandwich !";

	cr_assert(my_strncmp(s1, s2, 13) == strncmp(s1, s2, 13));
	cr_assert(my_strncmp(s2, s1, 6) == strncmp(s2, s1, 6));
}

Test(strncmp, simple, .init = init)
{
	char	*s1 = "Yes, you are";
	char	*s2 = "you";

	cr_assert(my_strncmp(s1, s2, 13) == strncmp(s1, s2, 13));
	cr_assert(my_strncmp(s2, s1, 6) == strncmp(s2, s1, 6));
}

Test(strncmp, empty_string, .init = init)
{
	char	*s1 = "";
	char	*s2 = "Hello World!";

	cr_assert(my_strncmp(s1, s2, 12) == strncmp(s1, s2, 12));
	cr_assert(my_strncmp(s2, s1, 8) == strncmp(s2, s1, 8));
	cr_assert(my_strncmp(s2, s2, 4) == strncmp(s2, s2, 4));
}

Test(strncmp, empty_string2, .init = init)
{
	char	*s1 = "Hello World!";
	char	*s2 = "";

	cr_assert(my_strncmp(s1, s2, 12) == strncmp(s1, s2, 12));
	cr_assert(my_strncmp(s2, s1, 8) == strncmp(s2, s1, 8));
	cr_assert(my_strncmp(s2, s2, 4) == strncmp(s2, s2, 4));
}

Test(strncmp, full_null, .init = init)
{
	char	*s1 = "";
	char	*s2 = "";

	cr_assert(my_strncmp(s1, s2, 0) == strncmp(s1, s2, 0));
	cr_assert(my_strncmp(s2, s1, 0) == strncmp(s2, s1, 0));
	cr_assert(my_strncmp(s2, s2, 0) == strncmp(s2, s2, 0));
}

Test(strncmp, same, .init = init)
{
	char	*s1 = "sandwich";

	cr_assert(my_strncmp(s1, s1, 10) == strncmp(s1, s1, 10));
}
