/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:18:46 by bcorak            #+#    #+#             */
/*   Updated: 2022/08/03 11:04:19 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i)
		&& (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
/*
#include <stdio.h>
int main()
{
	char d1[]="burakcorak";
	char d2[]="burakcorak";

	printf("%d ",ft_strcmp(d1,d2));
}
*/
