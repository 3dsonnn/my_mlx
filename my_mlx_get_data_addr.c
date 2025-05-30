/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_data_addr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:20:23 by efinda            #+#    #+#             */
/*   Updated: 2025/05/29 20:33:08 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

void	my_mlx_get_data_addr(t_img *img)
{
	if (!img || !img->img)
		return ;
	img->addr = (int *)mlx_get_data_addr(img->img, &img->bpp, &img->line_len,
			&img->endian);
	if (!img->addr)
		return ;
	img->line_len /= 4;
}
