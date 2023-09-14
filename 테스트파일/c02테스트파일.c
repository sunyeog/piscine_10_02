c02 ex00

int main()
{
	char dest[4] = "abc";
	char src[4] = "efg";
	ft_strcpy(dest, src);
	printf("%s", dest);
}


-----------------------------------------------------------------
ex01

nt main()
{
    char dest[6] = "abcde";
    char src[6] = "fghij";
    ft_strncpy(dest, src, 2);
    printf("%s", dest);
}

--------------------------------------------------------------------
ex02

int main(void)
{
    char *str = "\0";
    int a = ft_str_is_alpha(str);
    printf("%d", a);
}


-----------------------------------------------------------------------
ex03

int    main(void)
{
    char *str = "";
    int a = ft_str_is_numeric(str);
    printf("%d", a);
}


---------------------------------------------------------------------------
ex04

int    main(void)
{
    char *str = "aGDfds";
    int a = ft_str_is_lowercase(str);
    printf("%d", a);
}


----------------------------------------------------------------------------
ex05

int    main(void)
{
    char *str = "aGDfds";
    int a = ft_str_is_uppercase(str);
    printf("%d", a);
}


---------------------------------------------------------------------------------
ex07

#include <stdio.h>
#include <stdlib.h>
char    *ft_strupcase(char *str)
{
    while(*str)
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    return (str);
}

int main(void)
{
    char str[] ="dfd";
    printf("%s", ft_strupcase(str));
}

---------------------------------------------------------------------------------------------------------
 ex09
 
 int main(void)
 {
     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
     ft_strcapitalize(str);
     char *a = ft_strcapitalize(str);
     printf("%s", a);
 }

-----------------------------------------------------------------------------------------------------------
 
ex11
 
 int    main(void)
 {
     char    *arr;
     arr = "Coucou\ntu vas bien ?";
     ft_putstr_non_printable(arr);
 }
