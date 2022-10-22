/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:54:56 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/10 20:26:39 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	last;
	int	i;

	i = 0;
	last = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[last];
		tab[last] = swap;
		i++;
		last--;
	}
}
/*
int	main(void)
{
	int str[] = {1, 2, 3, 4, 5, 6};
	int size = 6;

	for(int i = 0; i < size; i++)
	{
		printf("Before : %d\n ",str[i]);
	}
	ft_rev_int_tab(str, size);
	for(int i = 0; i < size; i++)
	{
		printf("After : %d\n ",str[i]);
	}
}*/
