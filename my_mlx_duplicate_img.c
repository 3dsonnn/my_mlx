/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_duplicate_img.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:16:33 by efinda            #+#    #+#             */
/*   Updated: 2025/05/29 20:33:22 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

void	my_mlx_duplicate_img(void *mlx, t_img *dst, t_img src)
{
	if (!mlx || src.size.x <= 0 || src.size.y <= 0)
		return ;
	my_mlx_init_img(dst);
	my_mlx_new_img(mlx, dst, (t_point){src.size.x, src.size.y});
	if (!dst->img)
		return ;
	my_mlx_get_data_addr(dst);
	if (!dst->addr)
		my_mlx_destroy_img(mlx, dst);
}
