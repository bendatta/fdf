/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baudiber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:25:28 by baudiber          #+#    #+#             */
/*   Updated: 2018/05/20 17:46:30 by baudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_vertical_line(int x, int y0, int y1, t_setup *setup)
{
	while (y0 < y1)
	{
		setup->data[setup->width * y0 + x] = 0xFFFFFF;
		y0++;
	}	
}

void	ft_bresenham(int x0, int y0, int x1, int y1, t_setup *setup)
{
	int		deltax;
	int		deltay;
	int		delta;
	int		y;

	if (x0 == x1)
		ft_vertical_line(x0, y0, y1, setup);
	if (x0 > x1)
		ft_swap(&x0, &x1);
	if (y0 > y1)
		ft_swap(&y0, &y1);
	y = y0;
	deltax = x1 - x0;
	deltay = y1 - y0;
	delta = 2 * deltay - deltax;
	while (x0 < x1)
	{
		setup->data[setup->width * y + x0] = 0xFFFFFF;
		if (delta > 0)
		{
			y++;
			delta = delta - 2 * deltax;
		}
		delta = delta + 2 * deltay;
		x0++;
	}
}
