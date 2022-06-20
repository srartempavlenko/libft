#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    unsigned char   *s;
    
    if (!dst || !src)
        return (NULL);
    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    while (i++ < n)
        *(d++) = *(s++);
    return (dst);
}