/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:14:01 by sunnoh            #+#    #+#             */
/*   Updated: 2023/08/26 21:07:35 by seowoo           ###   ########.fr       */
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
			if (wid == x && hit == y && wid != 1
				&& hit != 1 || wid == 1 && hit == 1)
				ft_putchar('A');
			else if (wid == x && hit == 1 || wid == 1 && hit == y)
				ft_putchar('C');
			else if (wid > 1 && hit > 1 && wid < x && hit < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
