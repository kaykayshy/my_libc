#include "my_libc.h"

size_t
my_strlen(const char *s)
{
	const char *p;

	p = s;
	while (*p != '\0')
		p++;
	return (p - s);
}