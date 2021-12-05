#include "libft.h"

void    ft_swap_strs(void *p1, void *p2)
{
    void    *tmp;

    tmp = *(void**)p1;
    *(void**)p1 = *(void**)p2;
    *(void**)p2 = tmp;
}
