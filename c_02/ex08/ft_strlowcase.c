/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:08:27 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:28:42 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char arr[] = "BURAK";

	printf("%s", arr);
	printf("\n%s",ft_strlowcase(arr));

	return 0;
}
*/
