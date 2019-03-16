/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshanaha <lshanaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 13:32:31 by lshanaha          #+#    #+#             */
/*   Updated: 2019/03/16 14:31:19 by lshanaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
#define LEM_IN_H

#include "libft.h"

typedef struct	s_lem_in
{
	int		ant_count;
	char	*start;
	char	*end;
	char	**nodes;
	int		node_count;
}				t_lem_in;

#define INP_ANT_C		(input->ant_count)
#define INP_START		(input->start)
#define INP_END			(input->end)
#define	INP_NODES		(input->nodes)
#define	INP_NODES_NAMES	(input->nodes)[0]
#define	INP_NODES_XS	(input->nodes)[0]
#define	INP_NODES_YS	(input->nodes)[0]
#define	INP_NODE_C		(input->node_count)

#endif