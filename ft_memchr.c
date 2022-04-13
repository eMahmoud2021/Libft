/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:26:55 by memam             #+#    #+#             */
/*   Updated: 2022/04/04 16:47:50 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	caractere;
	size_t			i;

	str = ((unsigned char *)s);
	caractere = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == caractere)
			return (str + i);
		i++;
	}
	return (0);
}
