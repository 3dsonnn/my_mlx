/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_init_img.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:08:17 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 14:54:36 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

inline void	my_mlx_init_img(t_img *img)
{
	if (!img)
		return ;
	*img = (t_img){.img = NULL, .addr = NULL, .line_len = 0, .bpp = 0,
		.endian = 0, .size = (t_point){.x = 0, .y = 0}};
}
