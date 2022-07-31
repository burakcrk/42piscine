/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcorak <bcorak@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:20:54 by bcorak            #+#    #+#             */
/*   Updated: 2022/07/31 14:49:58 by bcorak           ###   ########.fr       */
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
			i = 0;
		else
			c++;
		i++;
	}
	return (0);
}
