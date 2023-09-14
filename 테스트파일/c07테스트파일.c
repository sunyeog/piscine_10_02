ex03

#include <stdio.h>
int main()
{
	char *c[] = {"sdfsdf","sdfdf","1111","sdfsdf"};
	char *seq = "...";

	printf("%s\n", ft_strjoin(4, c, seq));
	return 0;
}
