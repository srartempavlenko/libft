#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    unsigned char   *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst || !src)
        return (NULL);
    i = 0;
    while (i++ < n)
        *(d++) = *(s++);
    return (dst);
}