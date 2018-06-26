/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pers.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baudiber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:30:29 by baudiber          #+#    #+#             */
/*   Updated: 2018/06/26 17:30:32 by baudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_hpt	apply_pers_hpt(t_hpt p, t_scene *s)
{
	if (p.z == 0.0)
		p.z = 0.001;
	p.x *= HEIGHT / (tan(s->cam.fov / 2) * p.z);
	p.y *= HEIGHT / (tan(s->cam.fov / 2) * p.z);
	return (p);
}
