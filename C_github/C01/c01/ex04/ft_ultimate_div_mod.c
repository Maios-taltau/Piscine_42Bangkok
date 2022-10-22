/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:37:35 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/10 20:24:48 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Result : div = %d, mod = %d\n",a, b);
}*/
