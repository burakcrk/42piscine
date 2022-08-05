/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:37:33 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/04 15:33:32 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	i = ft_strlen(dest);
	j = 0;
	while (*(src + j) != '\0' && i < size - 1)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (ft_strlen(dest) + ft_strlen(src + j));
}
/*
#include <stdio.h>
int main()
{
	char d1[] = "burak";
	char d2[] = "corak";
	ft_strlcat(d1,d2,7);
	printf("%s",d1);

	return 0;
}
*/
