/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:33:15 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/02 23:27:03 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) < 'A')
			|| ((*(str + i) > 'Z') && (*(str + i) < 'a'))
			|| (*(str + i) > 'z' ))
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
	char arr[] = "burak41";
	char arr2[] = "burak";
	
	printf("%s - %d",arr, ft_str_is_alpha(arr));
	printf("\n%s - %d",arr2, ft_str_is_alpha(arr2));
	return 0;
}
*/
