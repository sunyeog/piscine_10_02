ex09

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    char *a = ft_strcapitalize(str);
    printf("%s", a);
}
---------------------------------------------------------------------------


ex08



#include <unistd.h>

void    first(int n)
{
    int    i;

    i = 0;
    while (a[i] != '\0')
    {
        a[i] = i + '0';
        write(1, &a[i], 1);
        i++;
    }
}

void    ft_print_combn(int n)
{
    int    i;
}

int    main(void)
{
    first(3);
}
