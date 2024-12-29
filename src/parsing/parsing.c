/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 07:38:36 by mkane             #+#    #+#             */
/*   Updated: 2024/02/19 23:02:13 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	parsing(int fd, t_data *data, char *map)
{
	data->count.player = 0;
	data->count.exit = 0;
	data->count.collectible = 0;
	data->map = ft_create_map(fd);
	if (!data->map)
	{
		ft_printf("map error\n");
		free(map);
		exit(0);
	}
	if (!ft_check_map(data))
		return (0);
	if (!path_finding(data))
		return (0);
	return (1);
}
