/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:06:23 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:00:18 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < '0' || *(str + i) > '9')
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
	char arr[]="41burak";
	char arr2[]="414141";
	printf("%s - %d", arr, ft_str_is_numeric(arr));
	printf("\n%s - %d", arr2, ft_str_is_numeric(arr2));

	return 0;
}
*/
