/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doom_nukem.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 12:46:31 by wpoudre           #+#    #+#             */
/*   Updated: 2020/09/09 12:46:34 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOM_NUKEM_H

# define DOOM_NUKEM_H

//// TODO разобраться со шрифтами в SDL

typedef enum	e_screen_status
{
	MAIN_MENU,
	LEVEL_EDITOR,
	LEVEL_LODE,
	GAME,
	PAUSE_MENU,
	PREFERENCES
}				t_screen_status;

typedef struct		s_fonts
{

}					t_fonts;

typedef struct		s_texture
{
	int 			width;
	int 			height;
	uint32_t		*bit_map;
}					t_texture;

/*
**		кнопки меню, которые можно нажать мышью, со своей текстурой
*/

typedef struct		s_button
{
	int 			x;
	int 			y;
	int 			width;
	int 			height;
	bool			brightness;
	uint32_t		*bit_map;
}					t_button;

typedef struct		s_menu
{

}					t_menu;

typedef struct		s_mouse
{
	int				x;
	int				y;
	bool			is_pressed;
}					t_mouse;

typedef struct		s_sdl
{
	SDL_Window		*win;
	SDL_Renderer	*rend;
	SDL_Texture		*color_tex;
	SDL_Surface		*surf;
	SDL_Texture		*tex;
	int				indian;
	uint32_t		*color_buffer;
}					t_sdl;

typedef struct		s_data
{

}					t_data;

#endif
