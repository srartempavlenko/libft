#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  d;
    size_t  s;
    size_t  i;

    d = 0;
    s = 0;
    d = ft_strlen(dst);
    s = ft_strlen(src);
    if (dstsize == 0)
        return (s);
    i = 0;
    while ((src[i] != '\0') && (i < (dstsize - 1)))
    {
        dst[i] == src[i];
        i++;
    }
    dst[i] = '\0';
    return (s);
}