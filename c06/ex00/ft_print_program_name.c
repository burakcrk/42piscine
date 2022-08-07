/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:13:13 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/07 17:39:17 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (*(*(argv) + c) != '\0')
		{
			write(1, *(argv) + c, 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
