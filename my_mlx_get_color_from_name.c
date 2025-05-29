/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_color_from_name.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:30:21 by efinda            #+#    #+#             */
/*   Updated: 2025/05/29 20:33:13 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

int	my_mlx_get_color_from_name(const char *input_name)
{
	int			i;

	i = 0;
	if (!input_name || !*input_name)
		return (-1);
	while (my_mlx_g_colors[i].name)
	{
		if (!ft_str_case_cmp((char *)input_name, my_mlx_g_colors[i].name))
			return (my_mlx_g_colors[i].value);
		i++;
	}
	return (-1);
}
