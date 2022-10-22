/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:11:34 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/16 22:58:55 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (dest[i] != 0)
		i++;
	while (src[x] != 0)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	if (dest[i] != 0)
		dest[i] = src[x];
	return (dest);
}

/*
int	main(void)
{
	char	str1[11];
	str1[0] = '4';
	str1[1] = '2';
	str1[2] = '\0';

	char str2[] = " Bangkok";
	printf("me : %s\n", ft_strcat(str1, str2));

}
*/
