/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 09:59:10 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:31:46 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c++ <= 'z')
		ft_putchar(c - 1);
}
