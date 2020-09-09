/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 13:23:25 by wpoudre           #+#    #+#             */
/*   Updated: 2020/09/09 13:23:27 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_STRUCT_H

# define MAP_STRUCT_H

#include "doom_nukem.h"

typedef enum		e_wall_type
{
	WALL,
	DOOR,
	WINDOW, ///Портал с 2 текстурами
	PORTAL
}					t_wall_type;

typedef struct		s_vec2
{
	float			x;
	float			y;
}					t_vec2;

typedef struct		s_vec3
{
	float			x;
	float			y;
	float			z;
}					t_vec3;

typedef struct s_sector	t_sector;

typedef struct		s_wall
{
	t_vec3			left;
	t_vec3			right;
	float			length;
	t_wall_type 	type;
	t_sector		*sector;
	///TODO решить как храронить текстуры, временно пусть будет так
	t_texture		*texture;
}					t_wall;

struct				s_sector
{
	t_wall			*wall;
};

#endif
