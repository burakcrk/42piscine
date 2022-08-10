/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:54:20 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/09 15:16:30 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	val;
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	val = max - min;
	arr = malloc(val * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	*range = arr;
	while (i < val)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (val);
}
/*
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	i;
	int size;
	int *mx;

	min = 3;
	max = 11;
	i = 0;
	size = ft_ultimate_range(&mx, min, max);
	while (i < size)
	{
		printf("%d, ", *(mx + i));
		i++;
	}
	return (0);
}
*/
