#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char   *d;
    unsigned char   *s;

    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (src < dst)
    {
        d = len - 1;
        s = len - 1;
        while (i++ < len)
            *(d--) = *(s--);
    }
    else
        ft_memcpy(d, s, len);
    return (dst);
}