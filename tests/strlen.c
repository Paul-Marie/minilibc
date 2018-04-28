/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strlen
*/

#include "tests.h"

Test(strlen, basic, .init = init)
{
	char	*str = "I'm a sandwich";

	cr_assert(my_strlen(str) == strlen(str));
}

Test(strlen, empty, .init = init)
{
	char	*str = "";

	cr_assert(my_strlen(str) == strlen(str));
}

Test(strlen, simple, .init = init)
{
	char	*str = "bi\nte";

	cr_assert(my_strlen(str) == strlen(str));
}

Test(strlen, special_character, .init = init)
{
	char	*str = "\n\t\r";

	cr_assert(my_strlen(str) == strlen(str));
}
