/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:22:45 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 12:45:59 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char d1[] = "burak";
	char d2[] = "corak";

	printf("%s", ft_strncat(d1,d2,3));
}
*/
