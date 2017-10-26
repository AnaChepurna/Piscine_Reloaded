/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 20:25:37 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/23 20:36:47 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int argv, char **argc)
{
	int		i;

	i = 1;
	while (i < argv)
	{
		ft_putstr(argc[i++]);
		ft_putchar('\n');
	}
}
