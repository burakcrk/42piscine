/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:21:08 by bcorak            #+#    #+#             */
/*   Updated: 2022/07/27 17:30:18 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 32 && *(str + i) <= 126)
		{
			ft_putchar(*(str + i));
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*(str + i) / 16]);
			ft_putchar("0123456789abcdef"[*(str + i) % 16]);
		}
		i++;
	}
}
