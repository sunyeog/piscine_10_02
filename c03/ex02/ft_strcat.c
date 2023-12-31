/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:12:26 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/03 20:31:51 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
	{
		i1++;
	}
	while (src[i2])
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
