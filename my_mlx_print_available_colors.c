/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_print_available_colors.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:32:01 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 15:07:22 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

void	my_mlx_print_available_colors(void)
{
	int	i;

	i = -1;
    ft_printf("These are the available colors on this system:\n");
	while (my_mlx_g_colors[++i].name)
        ft_printf("\t%s\n", my_mlx_g_colors[i].name);
}
