#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  j;
    size_t  i;
    size_t  d;
    size_t  s;

    j = ft_strlen(dst);
    i = 0;
    d = ft_strlen(dst);
    s = ft_strlen(src);
    if (dstsize < 1)
        return (s + dstsize);
    while ((src[i] != '\0') && (i < (dstsize - 1)))
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    if (dstsize < d)
        return (s + dstsize);
    else
        return (d + s);
}