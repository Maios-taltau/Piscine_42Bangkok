/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:16 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/17 01:35:11 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	if (dest[i1] != '\0')
	{
		//dest[i1 + 1] = src[i2];
		dest[i1] = '\0';
	}
	return (dest);
}

/*
int		main(void)
{
	char				dest[50] = "Supahwit";
	char				*src;
	unsigned int		size;

	size = 7;
	src = " Kaewpan";
	printf(".%s.\n", ft_strncat(dest, src, size));
}
*/
