/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 16:33:03 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 17:15:36 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	increase_pike(t_env *e)
{
	e->pad_h = (e->pad_h + 1.2 <= 0) ? e->pad_h : e->pad_h + 1.2;
	erase(e);
}

void	decrease_pike(t_env *e)
{
	e->pad_h = (e->pad_h - 1.2 <= 0) ? e->pad_h : e->pad_h - 1.2;
	erase(e);
}

void	rotation_left(t_env *e)
{
	e->angle -= 0.05;
	erase(e);
}

void	rotation_right(t_env *e)
{
	e->angle += 0.05;
	erase(e);
}
