/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:43:21 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 11:47:20 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*str2;

	str2 = (unsigned char *) str;
	i = 0;
	while (*(str2 + i) != '\0')
	{
		if (*(str2 + i) >= 32 && *(str2 + i) <= 126)
		{
			ft_putchar(*(str2 + i));
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*(str2 + i) / 16]);
			ft_putchar("0123456789abcdef"[*(str2 + i) % 16]);
		}
		i++;
	}
}
/*
int main()
{
	char str[]="Coucou\ntu vas b\tien ?";

	ft_putstr_non_printable(str);


}
*/
