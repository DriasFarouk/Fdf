/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:27:38 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 14:45:48 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	calcule_coord(t_env *e)
{
	int	i;
	int	j;

	j = 0;
	while (j < e->map_y)
	{
		i = 0;
		while (i < e->map_x)
		{
			calculate(e, &(e->map[j][i]));
			i++;
		}
		j++;
	}
	draw_map(e);
}

void	calculate(t_env *e, t_point *pt)
{
	float	act_px;
	float	act_py;
	float	act_pz;
	float	px;
	float	py;

	act_px = pt->x * e->pad;
	act_py = pt->y * e->pad;
	act_pz = pt->z * e->pad_h;
	px = act_px * cos(e->angle) - act_py * sin(e->angle);
	py = act_px * sin(e->angle) + act_py * cos(e->angle);
	pt->tx = px - py + WIN_W * 0.3;
	pt->ty = px * 0.5 + py * 0.5 - act_pz + WIN_H * 0.3;
}
