/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strcspn
*/

#include "tests.h"

Test(strcspn, basic, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strcspn(s1, "es") == strcspn(s1, "es"));
	cr_assert(my_strcspn(s1, "t") == strcspn(s1, "t"));
}

Test(strcspn, empty_string, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strcspn(s1, "") == strcspn(s1, ""));
	cr_assert(my_strcspn("", "test") == strcspn("", "test"));
	cr_assert(my_strcspn("", "") == strcspn("", ""));
}

Test(strcspn, same, .init = init)
{
	char	*s1 = strdup("test");

	cr_assert(my_strcspn(s1, s1) == strcspn(s1, s1));
}
