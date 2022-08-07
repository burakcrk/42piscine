/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:47:19 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/07 18:07:08 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (*(*(argv + i) + j) != '\0')
		{
			write(1, *(argv + i) + j, 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
