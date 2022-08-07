/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:41:54 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/06 17:09:55 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

int	ft_check(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (*str == '\0' || x == 1)
		return (0);
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 32 || *(str + i) == 127
			|| *(str + i) == 43 || *(str + i) == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (*(str + i) == *(str + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght;
	int		check;
	long	num;

	check = ft_check(base);
	lenght = ft_strlen(base);
	num = nbr;
	if (check == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num < lenght)
		{
			ft_putchar(*(base + num));
		}
		if (num >= lenght)
		{
			ft_putnbr_base(num / lenght, base);
			ft_putnbr_base(num % lenght, base);
		}
	}
}

#include <stdio.h>
int	main()
{
	int n;
	char *b;

	n = -467;
	b = "0123456789abcdef";
	ft_putnbr_base(n,b);
}

