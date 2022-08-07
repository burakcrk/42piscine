/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:19:53 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/07 14:48:41 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (!(nb % i))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}	
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_is_prime(11));
	return (0);
}
*/
