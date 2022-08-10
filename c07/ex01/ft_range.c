/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:08:05 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/09 13:53:00 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	arr = malloc(range * sizeof(int));
	if (!arr)
	{
		return (0);
	}
	i = 0;
	while (i < range)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*mx;

	min = 0;
	max = 9;
	mx = ft_range (min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d",*(mx + i));
		i++;
	}
	return (0);
}
*/
