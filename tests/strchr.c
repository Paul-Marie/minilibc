/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** strchr
*/

#include "tests.h"

Test(strchr, basic, .init = init)
{
	char	*str = "Hello World";

	cr_assert(my_strchr(str, 'W') == strchr(str, 'W'));
	cr_assert(my_strchr(str, 'w') == strchr(str, 'w'));
}

Test(strchr, empty, .init = init)
{
	char	*str = "";

	cr_assert(my_strchr(str, 'W') == strchr(str, 'W'));
}

Test(strchr, zero, .init = init)
{
	char	*str = "I'm a sandwich";

	cr_assert(my_strchr(str, '\0') == strchr(str, '\0'));
}

Test(strchr, full_null, .init = init)
{
	char	*str = "";

	cr_assert(my_strchr(str, '\0') == strchr(str, '\0'));
}

Test(strchr, overload, .init = init)
{
	char	*str = "hmmm... CRASH ME";

	cr_assert(my_strchr(str, 2147483647) == strchr(str, 2147483647));
}
