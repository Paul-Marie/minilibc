/*
** EPITECH PROJECT, 2018
** tests.h
** File description:
** tests
*/

#ifndef TESTS_H
#define TESTS_H

#include <criterion/criterion.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <fcntl.h>
#include <dlfcn.h>

void		init(void);
size_t		(*my_strlen)(const char *str);
char		*(*my_strchr)(const char *str, int c);
void		*(*my_memset)(void *str, int c, size_t n);
int		(*my_strcmp)(const char *str1, const char *str2);
int		(*my_strcasecmp)(const char *str1, const char *str2);
void		*(*my_memcpy)(void *dest, const void *strrc, size_t n);
void		*(*my_memmove)(void *dest, const void *strrc, size_t n);
int		(*my_strncmp)(const char *str1, const char *str2, size_t n);
char		*(*my_strstr)(const char *haystack, const char *needle);
ssize_t		(*my_write)(int fd, const void *buf, size_t count);
char		*(*my_strpbrk)(const char *str, const char *accept);
size_t		(*my_strcspn)(const char *str, const char *reject);
ssize_t		(*my_read)(int fd, void *buffer, size_t count);
char		*(*my_rindex)(const char *str, int c);

#endif /* !TESTS_H */
