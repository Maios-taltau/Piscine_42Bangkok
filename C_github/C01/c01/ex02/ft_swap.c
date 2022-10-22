/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:45:31 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/10 20:23:28 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 24;
	y = 42;
	printf("Before : %d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("Before : %d, %d\n", x, y);
}*/
