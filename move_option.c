/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_option.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 16:37:37 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 17:00:18 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	move_image_up(t_env *e)
{
	e->move_y -= 10;
	erase(e);
}

void	move_image_down(t_env *e)
{
	e->move_y += 10;
	erase(e);
}

void	move_image_left(t_env *e)
{
	e->move_x -= 10;
	erase(e);
}

void	move_image_right(t_env *e)
{
	e->move_x += 10;
	erase(e);
}
