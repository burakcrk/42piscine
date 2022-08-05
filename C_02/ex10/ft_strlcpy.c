/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:46:11 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:58:10 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (*(src + c) != '\0')
	{
		c++;
	}
	if (size != 0)
	{
		while (*(src + i) != '\0' && i < (size - 1))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	char	source[] = "BuRaK";
	char	destination[]="";

	ft_strlcpy(destination, source, 6);
	printf("destination = %s",destination);
}
*/
