/*
** EPITECH PROJECT, 2018
** minilibc
** File description:
** init of test
*/

#include "tests.h"

void		init(void)
{
	void	*handle;

	handle = dlopen("./libasm.so", RTLD_LAZY);
	if (!handle)
		write(2, "./libasm.so: Not found\n", 23);
	else {
		my_strcasecmp = dlsym(handle, "strcasecmp");
		my_memmove = dlsym(handle, "memmove");
		my_strncmp = dlsym(handle, "strncmp");
		my_strpbrk = dlsym(handle, "strpbrk");
		my_strcspn = dlsym(handle, "strcspn");
		my_strlen = dlsym(handle, "strlen");
		my_strchr = dlsym(handle, "strchr");
		my_memset = dlsym(handle, "memset");
		my_memcpy = dlsym(handle, "memcpy");
		my_strcmp = dlsym(handle, "strcmp");
		my_rindex = dlsym(handle, "rindex");
		my_strstr = dlsym(handle, "strstr");
		my_write = dlsym(handle, "write");
		my_read = dlsym(handle, "read");
	}
}
