/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:42:26 by memam             #+#    #+#             */
/*   Updated: 2022/04/04 16:28:30 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*m;
	int		i;

	i = 0;
	while (src[i])
		i++;
	m = malloc(sizeof(char) * (i + 1));
	if (!m)
		return (0);
	i = 0;
	while (src[i])
	{
		m[i] = src[i];
		i++;
	}
	m[i] = 0;
	return (m);
}
