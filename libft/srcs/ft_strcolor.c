/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwerewol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:38:19 by bwerewol          #+#    #+#             */
/*   Updated: 2018/12/21 17:33:20 by bwerewol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_strcolor(char *str, int x1, int x2, int x3)
{
	if (!x1 && !x2 && !x3)
	{
		ft_memcpy(str, "\x1b[00;00;00m", 11);
		return ;
	}
	ft_memcpy(str, "\x1b[", 2);
	str[2] = x3 / 10 + '0';
	str[3] = x3 % 10 + '0';
	str[4] = ';';
	str[5] = x2 / 10 + '0';
	str[6] = x2 % 10 + '0';
	str[7] = ';';
	str[8] = x1 / 10 + '0';
	str[9] = x1 % 10 + '0';
	str[10] = 'm';
}
