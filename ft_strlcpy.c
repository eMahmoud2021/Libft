/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:57:42 by memam             #+#    #+#             */
/*   Updated: 2022/04/04 16:21:55 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[a] && a < (size - 1))
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (ft_strlen(src));
}
