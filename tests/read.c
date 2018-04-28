/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** read
*/

#include "tests.h"

Test(read, basic, .init = init)
{
	char	buffer[100] = {0};
	int	fd = open("Makefile", O_RDONLY);

	cr_assert(my_read(fd, buffer, 100) == read(fd, buffer, 100));
}

Test(read, empty, .init = init)
{
	char	buffer[4096] = {0};
	int	fd = open("tests/NULL", O_RDONLY);

	cr_assert(my_read(fd, buffer, 4096) == read(fd, buffer, 4096));
}
