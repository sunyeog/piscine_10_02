/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunnoh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 01:42:27 by sunnoh            #+#    #+#             */
/*   Updated: 2023/09/10 18:18:22 by sunnoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idest;
	unsigned int	isrc;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	isrc = 0;
	idest = destlen;
	while (src[isrc] && (destlen + isrc + 1 < size))
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	if (destlen < size)
		return (srclen + destlen);
	else
		return (srclen + size);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char	s1[3] = "si";
	char* s2 = "hello";
//	printf("%d", strlcat(s1,s2, 10));
	printf("%d\n", ft_strlcat(s1,s2,10));
}
