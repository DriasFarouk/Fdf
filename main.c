/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 17:02:54 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 17:16:00 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	t_env e;

	e.path = argv[1];
	if (argc == 2)
	{
		ft_import_map(&e);
	}
	else
		ft_putstr("Insert Map here !!!");
	return (0);
}
