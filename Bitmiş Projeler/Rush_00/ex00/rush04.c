/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osimsek <osimsek@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:46:43 by osimsek           #+#    #+#             */
/*   Updated: 2022/07/24 18:11:44 by osimsek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int sutun, int satir)
{
	int	x;
	int	y;

	y = -1;
	while (++y < satir)
	{
		x = -1;
		while (++x < sutun)
		{
			if ((x == 0 && y == 0) || (x == sutun - 1 && y == satir - 1
					&& sutun != 1 && satir != 1))
				ft_putchar('A');
			else if (((x > 0 && x < sutun - 1 && y == 0)
					|| (x > 0 && x < sutun - 1 && y == satir - 1))
				|| ((x < 1 && y != satir - 1)
					|| (x > sutun - 2 && y != 0 && sutun != 1)))
				ft_putchar('B');
			else if ((x == 0 && y == satir - 1) || (x == sutun - 1 && y == 0))
				ft_putchar('C');
			else if ((y != 0 && y != satir - 1))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
