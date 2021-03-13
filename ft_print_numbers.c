/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helrrakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:04:29 by helrrakk          #+#    #+#             */
/*   Updated: 2021/03/13 14:04:50 by helrrakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_numbers(void)
{
	char i;
	
	i = '0';
	while (i <= '9')
	{		
		write (1, &i, 1);
		i++;
	}
}	
