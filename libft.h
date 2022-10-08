#ifndef LIBFT_h
#define LIBFT_h

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ft_isalpha(int c);
int toupper(int c);
int isdigit(int c);
int strncmp(const char *s1, const char *s2, size_t n);
int isascii(int c);
int isprint(int c);
int ft_isalnum(int c);

#endif