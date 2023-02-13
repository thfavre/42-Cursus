/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:25:39 by fgrasset          #+#    #+#             */
/*   Updated: 2023/02/13 15:12:47 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "mlx/mlx.h"
# include <math.h>

/* struct to get the data fo fdf */
typedef struct s_data {
	void	*img;
	void	*addr;
	int		bits_per_pixel;
	int		line_len;
	int		endian;
	int		**map;
}				t_data;

/* struct to create a matrix */
typedef struct s_matrix {
	int	i;
	int	j;
}				t_matrix;

#endif