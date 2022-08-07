/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:33:44 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/06 17:43:20 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fac;

	fac = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));
}
*/
