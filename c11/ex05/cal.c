/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:48:28 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/14 19:30:43 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	plus(int x, int y)
{
	int	res;

	res = x + y;
	return (res);
}

int	minus(int x, int y)
{
	int	res;

	res = x - y;
	return (res);
}

int	aster(int x, int y)
{
	int	res;

	res = x * y;
	return (res);
}

int	slash(int x, int y)
{
	int	res;

	res = x / y;
	return (res);
}

int	per(int x, int y)
{
	int	res;

	res = x % y;
	return (res);
}
