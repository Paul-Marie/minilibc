/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strstr
*/

#include "tests.h"

Test(strstr, basic, .init = init)
{
	char	*s1 = strdup("test");
	char	*s2 = strdup("st");

	cr_assert(my_strstr(s1, s2) == strstr(s1, s2));
	cr_assert(my_strstr(s2, s1) == strstr(s2, s1));
	cr_assert(my_strstr(s2, s2) == strstr(s2, s2));
}

Test(strstr, empty_string, .init = init)
{
	char	*s1 = strdup("");
	char	*s2 = strdup("st");

	cr_assert(my_strstr(s1, s2) == strstr(s1, s2));
	cr_assert(my_strstr(s2, s1) == strstr(s2, s1));
	cr_assert(my_strstr(s1, s1) == strstr(s1, s1));
}

Test(strstr, full_null, .init = init)
{
	char	*str1 = strdup("");
	char	*str2 = strdup("");

	cr_assert(my_strstr(str1, str2) == strstr(str1, str2));
}

Test(strstr, same, .init = init)
{
	char	*s1 = strdup("st");
	char	*s2 = strdup("st");

	cr_assert(my_strstr(s1, s2) == strstr(s1, s2));
	cr_assert(my_strstr(s2, s2) == strstr(s2, s2));
}
