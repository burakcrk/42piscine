/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:50:19 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:21:35 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char arr[] = "burak";

	printf("%s", arr);
	printf("\n%s",ft_strupcase(arr));

	return 0;
}
*/
