/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** write
*/

#include "tests.h"

Test(write, basic, .init = init)
{
	char	*str = "I'm a sandwich\n";

	cr_assert(my_write(1, str, strlen(str)) == write(1, str, strlen(str)));
}

Test(write, error, .init = init)
{
	char	*str = "I'm a sandwich\n";

	cr_assert(my_write(2, str, strlen(str)) == write(2, str, strlen(str)));
}

Test(write, dev_null, .init = init)
{
	char	*str = "I'm a sandwich\n";
	int     fd = open("/dev/null", O_WRONLY);

	cr_assert(my_write(fd, str, strlen(str)) == write(fd, str, strlen(str)));
}

Test(write, length_null, .init = init)
{
	char	*str = "I'm a sandwich\n";

	cr_assert(my_write(1, str, 0) == write(2, str, 0));
}

Test(write, empty, .init = init)
{
	char	*str = "";

	cr_assert(my_write(1, str, strlen(str)) == write(1, str, strlen(str)));
}

Test(write, simple, .init = init)
{
	char	*str = "I'm a\nsandwich\n._.\n";

	cr_assert(my_write(1, str, strlen(str)) == write(1, str, strlen(str)));
}

Test(write, special_character, .init = init)
{
	char	*str = "\nAA\tB\rC\n\rD\n";

	cr_assert(my_write(1, str, strlen(str)) == write(1, str, strlen(str)));
}
