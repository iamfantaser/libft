void    ft_swap_int(void *a, void *b)
{
    int temp;

    temp = *(int *)a;
    temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}