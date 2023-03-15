/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:42:37 by vde-prad          #+#    #+#             */
/*   Updated: 2023/03/15 15:21:02 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
//*********************** STANDARD LIBRARIES *********************************
# include <stdio.h>
# include <stdlib.h>
# include <memory.h>
# include <math.h>
# include "libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"

//************************** DEFINITIONS *************************************
# define WIDTH 1700
# define HEIGHT 1400
# define MAX_ITER 100
# define MAX_RE 1.0
# define MIN_RE -2.0
# define MAX_I 1.2
# define MIN_I -1.2

typedef struct s_data
{
	mlx_t		*mlx;
	mlx_image_t	*img;
	int			x;
	int			y;
	float		z_r;
	float		z_i;
	float		c_r;	
	float		c_i;
}	t_data;

//*************************** FUNCTIONS **************************************
void	ft_mandelbrot_set(t_data *data);
int		ft_color(int i);
float	ft_module(float r, float i);
#endif