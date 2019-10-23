/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschmele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:55:34 by sschmele          #+#    #+#             */
/*   Updated: 2018/12/12 13:04:08 by sschmele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_nputstr(char const *s, int len)
{
	int i;

	i = 0;
	if (s)
	{
		while (i < len)
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
