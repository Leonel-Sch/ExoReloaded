/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:45:41 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 13:56:53 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 0;
	while (i <= 25)
	{
		ft_putchar('a' + i);
		i++;
	}
}
int	main(void)
{
	ft_print_alphabet;
	return (0);
}