/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_color_from_name.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:30:21 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 10:48:22 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

int	my_mlx_get_color_from_name(const char *input_name)
{
	int			i;

	i = 0;
	if (!input_name)
		return (-1);
	while (mlx_col_name[i].name)
	{
		if (!ft_str_case_cmp(input_name, mlx_col_name[i].name))
			return (mlx_col_name[i].color);
		i++;
	}
	return (-1);
}
