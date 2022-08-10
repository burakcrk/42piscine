/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:26:49 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/09 13:05:52 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (*(src + len) != '\0')
	{
		len++;
	}	
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (!dest)
	{
		return (0);
	}
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "burak";
	s2 = ft_strdup(s1);
	printf("s1 = %s\ns2 = %s", s1, s2);
	return (0);
}
*/
