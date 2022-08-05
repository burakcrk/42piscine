/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:39:54 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:06:51 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'a' || *(str + i) > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char arr[] = "burak";
	char arr2[] = "BURAK";

	printf("%s - %d", arr, ft_str_is_lowercase(arr));
	printf("\n%s - %d", arr2, ft_str_is_lowercase(arr2));
	return 0;
}
*/
