/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:20:54 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:34:05 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (*(str + i) != '\0')
	{
		if (c == 0 && (*(str + i) >= 'a' && *(str + i) <= 'z'))
		{
			*(str + i) -= 32;
			c++;
		}
		else if (c > 0 && (*(str + i) >= 'A' && *(str + i) <= 'Z'))
			*(str + i) += 32;
		else if ((*(str + i) < '0')
			|| (*(str + i) > '9' && *(str + i) < 'A')
			|| (*(str + i) > 'Z' && *(str + i) < 'a')
			|| *(str + i) > 'z')
			c = 0;
		else
			c++;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", arr);
	printf("\n%s",ft_strcapitalize(arr));

	return 0;
}
*/
