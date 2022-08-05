/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:28:51 by bcorak            #+#    #+#             */
/*   Updated: 2022/07/29 22:00:41 by bcorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - i -1);
		*(tab + size - i -1) = temp;
		i++;
	}
}

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    ft_rev_int_tab(a,7);
    printf("%d %d %d",a[0],a[1],a[2]);
}
