/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <efichot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:55:21 by efichot           #+#    #+#             */
/*   Updated: 2016/11/02 15:57:49 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
