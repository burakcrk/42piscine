/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:40:30 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 17:16:01 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j) && *(str + i + j) != '\0')
		{
			if (*(to_find + j + 1) == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char d1[] = "burakcorak";
	char d2[] = "ak";

	printf("%s %p ",ft_strstr(d1,d2),ft_strstr(d1,d2));
	return 0;
}
*/
