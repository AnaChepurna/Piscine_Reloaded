/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 21:29:02 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/25 20:09:57 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		module(int min, int max)
{
	return (max - max >= 0 ? max - min : min - max);
}

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	if (max <= min)
		return (NULL);
	range = malloc(sizeof(int) * (module(min, max)));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
