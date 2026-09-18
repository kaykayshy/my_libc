#include "my_libc.h"

char *
my_strcpy(char *dst, const char *src)
{
	char *d;

	d = dst;
	while (*src != '\0') {
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dst);
}