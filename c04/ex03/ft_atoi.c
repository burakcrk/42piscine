/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 06:50:57 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/06 10:37:38 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(*(str + i)) == 1)
	{
		i++;
	}
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (*(str + i) - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
int main()
{
	int a = ft_atoi("  --+-4646g548");
	printf("%d", a);
}
*/
