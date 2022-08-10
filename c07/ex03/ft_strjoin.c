/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:19:00 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/09 17:41:34 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin_cpy(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, *(strs + i));
		j += ft_strlen(*(strs + i));
		i++;
		if (i < size)
		{
			ft_strcpy(dest + j, sep);
			j += ft_strlen(sep);
		}
	}
	*(dest + j) = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(*(strs + i));
		i++;
	}
	if (size > 0)
	{
		j += (size - 1) * ft_strlen(sep);
	}
	dest = malloc(sizeof(char) * (j + 1));
	if (!dest)
	{
		return (NULL);
	}
	return (ft_strjoin_cpy(size, strs, sep, dest));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	
	char *arr[] = {"burak", "huso", "kadir", "ibo"};
	printf("%s\n", ft_strjoin(4, arr, "--"));
		
	return (0);

}
*/
