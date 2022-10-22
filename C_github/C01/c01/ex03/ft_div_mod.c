/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:23:38 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/11 12:17:51 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int *div;
	int *mod;

	*div = 0;
	*mod = 0;
	printf("Before : %d, %d",&div, &mod);
	ft_div_mod(23, 10, *div, *mod);
	printf("After : %d, %d",&div, &mod);
}*/
