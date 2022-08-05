/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 02:52:23 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 01:14:48 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) > 126)
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
	char arr2[] = "burak\tcorak";

	printf("%s - %d", arr, ft_str_is_printable(arr));
	printf("\n%s - %d", arr2, ft_str_is_printable(arr2));
	return 0;
}
*/
