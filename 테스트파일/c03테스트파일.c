ex00

int main(void)
{
    char *a = "abcde";
    char *b = "abcd";
    ft_strcmp(a, b);
    printf("%d", ft_strcmp(a, b));
}




----------------------------------------------------------------------
ex01

int main(void)
{
    char *a = "abhrh";
    char *b = "abrgw";
    printf("%d", ft_strncmp(a, b, 3));
}


--------------------------------------------------------------------
ex03

int main(void)
{
    char *dest = "abcd";
    char *src = "efg";
    printf("%s", ft_strncat(dest, src, 2));
}
