/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_lerp_color.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:50:54 by efinda            #+#    #+#             */
/*   Updated: 2025/05/16 12:55:25 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

int	my_mlx_get_lerp_color(int start, int end, float interpolant)
{
    t_rgb   s;
    t_rgb   e;
    t_rgb   res;

    s = my_mlx_get_rgb_values(start);
    e = my_mlx_get_rgb_values(end);
    res.r = (int)((s.r * interpolant) + ((1 - interpolant) * e.r));
    res.g = (int)((s.g * interpolant) + ((1 - interpolant) * e.g));
    res.b = (int)((s.b * interpolant) + ((1 - interpolant) * e.b));
    return (my_mlx_get_rgb_color(res.r, res.g, res.b));
}