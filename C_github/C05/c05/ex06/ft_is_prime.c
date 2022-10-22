/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:51:33 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/21 18:34:50 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb);

/*
int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d -> %d\n", 200, ft_is_prime(200));
	printf("%d -> %d\n", 201, ft_is_prime(201));
	printf("%d -> %d\n", 202, ft_is_prime(202));
	printf("%d -> %d\n", 203, ft_is_prime(203));
	printf("%d -> %d\n", 204, ft_is_prime(204));
	printf("%d -> %d\n", 205, ft_is_prime(205));
	printf("%d -> %d\n", 206, ft_is_prime(206));
	printf("%d -> %d\n", 207, ft_is_prime(207));
	printf("%d -> %d\n", 208, ft_is_prime(208));
	printf("%d -> %d\n", 209, ft_is_prime(209));
	printf("%d -> %d\n", 210, ft_is_prime(210));
	printf("%d -> %d\n", 211, ft_is_prime(211));
	printf("%d -> %d\n", 212, ft_is_prime(212));
	printf("%d -> %d\n", 243, ft_is_prime(243));
	printf("%d -> %d\n", 244, ft_is_prime(244));
	printf("%d -> %d\n", 245, ft_is_prime(245));
	printf("%d -> %d\n", 50744, ft_is_prime(50744));
}
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
