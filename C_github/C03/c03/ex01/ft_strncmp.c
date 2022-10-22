/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:09:02 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/16 04:46:20 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (*(s1 + i) != *(s2 + i) || (s1[i] && s2[i]) == '\0')
				return (s1[i] - s2[i]);
			i ++;
		}
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char s1[] = "su\0hbaait";
	char s2[] = "su\0hbawit";
	int n = 7;

	printf("test strncmp : %d\n",strncmp(s1, s2, n));
	printf("test strncmp : %d\n",ft_strncmp(s1, s2, n));

}
*/
