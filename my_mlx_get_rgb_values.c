/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_rgb_values.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:43:31 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 14:54:40 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

inline t_rgb	my_mlx_get_rgb_values(int color)
{
    return ((t_rgb){.r = (color >> 16) & 0xFF, .g = (color >> 8) & 0xFF, .b = color & 0xFF});
}
