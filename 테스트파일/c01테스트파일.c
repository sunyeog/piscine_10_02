ex05

int main(void)
{
    char *str = "abcdefg";
    ft_putstr(str);
}


---------------------------------------------------------------------------------------

ex07

int main(void)
{
    int tab[5];

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    ft_rev_int_tab(tab, 5);

    printf("%d", tab[0]);
    printf("%d", tab[1]);
    printf("%d", tab[2]);
    printf("%d", tab[3]);
    printf("%d", tab[4]);
}



--------------------------------------------------------------------------------
ex08

int main(void)
{
    int tab[5];

    tab[0] = 5;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 1;

    ft_sort_int_tab(tab, 5);

    printf("%d", tab[0]);
    printf("%d", tab[1]);
    printf("%d", tab[2]);
    printf("%d", tab[3]);
    printf("%d", tab[4]);
}
