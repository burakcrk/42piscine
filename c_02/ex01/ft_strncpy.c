/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:24:32 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/02 23:29:30 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	source[] = "BuRaK";
	char	*destination;

	ft_strncpy(destination, source, 3);
	printf("source = %s\ndestination = %s",source,destination);
}
*/
