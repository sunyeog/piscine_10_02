/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhan <janhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:27:06 by janhan            #+#    #+#             */
/*   Updated: 2023/08/26 21:55:28 by seowoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	hit;

	hit = 1;
	while (hit <= y && (x > 0 && y > 0))
	{
		wid = 1;
		while (wid <= x)
		{
			if ((wid == 1 && hit == 1) || (wid == 1 && hit == y))
				ft_putchar('A');
			else if ((wid == x) && (hit == 1 || hit == y))
				ft_putchar('C');
			else if (((1 < wid < x) && (hit == y || hit == 1))
				|| ((1 < hit < y) && (wid == x || wid == 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
