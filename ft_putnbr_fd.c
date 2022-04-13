/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:26:55 by memam             #+#    #+#             */
/*   Updated: 2022/04/04 16:35:18 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl > 100)
		ft_putnbr_fd(nl / 10, fd);
	else if ((nl / 10) > 0)
		ft_putchar_fd((nl / 10) + '0', fd);
	ft_putchar_fd((nl % 10) + '0', fd);
}
