/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_destroy_img.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:11:46 by efinda            #+#    #+#             */
/*   Updated: 2025/05/16 11:12:14 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

void	my_mlx_destroy_img(void *mlx, t_img *img)
{
	if (mlx && img && img->img)
	{
		mlx_destroy_image(mlx, img->img);
		my_mlx_init_img(img);
	}
}
