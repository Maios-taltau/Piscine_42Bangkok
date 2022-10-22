/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:54:15 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/10 20:27:00 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	x;

	swap = 0;
	i = 0;
	while (i < size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[i] < tab[x])
			{
				swap = tab[x];
				tab[x] = tab[i];
				tab[i] = swap;
			}
			x++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {3, 5, 2, 1, 7, 87, 1, 1,5};
	int size = 9;
	for(int i = 0;i < size;i++)
	{
		printf("%d, ", tab[i]);
	}
	ft_sort_int_tab(tab, size);
	printf("\n");
	for(int i = 0;i < size;i++)
	{
		printf("%d, ", tab[i]);
	}
}*/
