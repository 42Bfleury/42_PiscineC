/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 23:20:19 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 23:31:53 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	int		i;

	i = -10;
	while (i++ <= 25)
		printf("ft_fibonacci(%i) => %i\n", (i - 1), ft_fibonacci((i - 1)));
	return (0);
}
