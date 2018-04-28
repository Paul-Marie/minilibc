/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strpbrk
*/

#include "tests.h"

Test(strpbrk, basic, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strpbrk(s1, "es") == strpbrk(s1, "es"));
	cr_assert(my_strpbrk(s1, "t") == strpbrk(s1, "t"));
}

Test(strpbrk, empty_string, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strpbrk(s1, "") == strpbrk(s1, ""));
	cr_assert(my_strpbrk("", "test") == strpbrk("", "test"));
	cr_assert(my_strpbrk("", "") == strpbrk("", ""));
}

Test(strpbrk, full_null, .init = init)
{
	cr_assert(my_strpbrk("", "") == strpbrk("", ""));
}

Test(strpbrk, same, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strpbrk(s1, s1) == strpbrk(s1, s1));
}
