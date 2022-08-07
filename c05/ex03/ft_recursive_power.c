/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:20:35 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/06 18:29:09 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (p);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_recursive_power(5,3));
}
*/
