/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_available_color.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:32:01 by efinda            #+#    #+#             */
/*   Updated: 2025/05/30 07:39:42 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

char	*my_mlx_get_available_color(void)
{
	static int	i;

	if (my_mlx_g_colors[i].name)
		return (my_mlx_g_colors[i++].name);
	i = 0;
	return (NULL);
}
