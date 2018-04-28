/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** rindex
*/

#include "tests.h"

Test(rindex, basic, .init = init)
{
	char	*str = "test";

	cr_assert(my_rindex(str, 't') == rindex(str, 't'));
	cr_assert(my_rindex(str, 'w') == rindex(str, 'w'));
}

Test(rindex, empty, .init = init)
{
	char	*str = "";

	cr_assert(my_rindex(str, 'p') == rindex(str, 'p'));
}

Test(rindex, zero, .init = init)
{
	char	*str = "bite";

	cr_assert(my_rindex(str, '\0') == rindex(str, '\0'));
}

Test(rindex, full_null, .init = init)
{
	char	*str = "";

	cr_assert(my_rindex(str, '\0') == rindex(str, '\0'));
}
