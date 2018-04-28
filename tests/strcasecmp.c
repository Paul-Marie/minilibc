/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strcasecmp
*/

#include "tests.h"

Test(strcasecmp, basic, .init = init)
{
	char	*s1 = "Yes, YOu arE";
	char	*s2 = "A FuckinG sandWich !";

	cr_assert(my_strcasecmp(s1, s2) == strcasecmp(s1, s2));
	cr_assert(my_strcasecmp(s2, s1) == strcasecmp(s2, s1));
}

Test(strcasecmp, simple, .init = init)
{
        char	*s1 = "YeS, yOu aRE";
        char	*s2 = "you";

	cr_assert(my_strncmp(s1, s2, 13) == strncmp(s1, s2, 13));
	cr_assert(my_strncmp(s2, s1, 6) == strncmp(s2, s1, 6));
}

Test(strcasecmp, empty_string, .init = init)
{
	char	*s1 = "";
	char	*s2 = "HEllo WoRld!";

	cr_assert(my_strcasecmp(s2, s1) == strcasecmp(s2, s1));
	cr_assert(my_strcasecmp(s2, s2) == strcasecmp(s2, s2));
}

Test(strcasecmp, empty_string2, .init = init)
{
	char	*s1 = "HEllo WOrld!";
	char	*s2 = "";

	cr_assert(my_strcasecmp(s1, s2) == strcasecmp(s1, s2));
}

Test(strcasecmp, full_null, .init = init)
{
	char	*s1 = "";
	char	*s2 = "";

	cr_assert(my_strcasecmp(s1, s2) == strcasecmp(s1, s2));
	cr_assert(my_strcasecmp(s2, s1) == strcasecmp(s2, s1));
	cr_assert(my_strcasecmp(s2, s2) == strcasecmp(s2, s2));
}

Test(strcasecmp, same, .init = init)
{
	char	*s1 = "sAnDwIcH";

	cr_assert(my_strcasecmp(s1, s1) == strcasecmp(s1, s1));
}
