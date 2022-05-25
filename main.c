#include "libft.h"

int main (void)
{
	char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = strlen(s2);

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}
