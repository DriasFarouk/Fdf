/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:42:21 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 17:14:13 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "mlx.h"

void	put_info_to_windows(t_env *e)
{
	put_meta(e);
}

void	put_meta(t_env *e)
{
	mlx_string_put(e->mlx, e->win, 1500, 100, 0xFFFFFF, "Legend :");
	mlx_string_put(e->mlx, e->win, 1500, 150, 0xFFFFFF, "move : arrow key");
	mlx_string_put(e->mlx, e->win, 1500, 170, 0xFFFFFF, "zoom : + , -");
	mlx_string_put(e->mlx, e->win, 1500, 190, 0xFFFFFF, "rotation : / , *");
	mlx_string_put(e->mlx, e->win, 1500, 210, 0xFFFFFF,
			"change Z : mouse 1 , mouse 3");
	mlx_string_put(e->mlx, e->win, 1500, 230, 0xFFFFFF,
			"valeur par defaut : o");
}
