/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baudiber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 19:18:24 by baudiber          #+#    #+#             */
/*   Updated: 2018/04/11 18:51:35 by baudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FDF_H_
# define _FDF_H_

# include "mlx.h"
# include "libft.h"

typedef struct		s_rows
{
	char			*line;
	struct s_rows	*next;
}					t_rows;

typedef struct	s_setup
{
	int			ptnb;
	int			ynb;
	int			xnb;
}				t_setup;

void	parser(char *av);

#endif
