#include "libft.h"

int main()
{

    char dest[9] = "ssssss";
    char *src = "zzz";
    size_t src_len = strlen(dest);
    // printf("%c", aar[ft_strlen(aar) - 1]);
    printf("%zu\n", strlcat(dest, src, 7));
    printf("%s\n", dest);
    printf("%s", src);
    return 0;
}