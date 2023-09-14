#include <stdio.h>
#include "ft_stock_str.h"

extern  struct s_stock_str *ft_strs_to_tab(int ac, char **av);
extern  void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	struct s_stock_str *strs = ft_strs_to_tab(argc, argv);
	
	for (int i=0; i<argc; i++)
		printf("[%d]: %d %s(%p) %s(%p)\n", i, strs[i].size, strs[i].str, strs[i].str, strs[i].copy, strs[i].copy);
	
	printf("======\n\n");

	ft_show_tab(strs);

}
