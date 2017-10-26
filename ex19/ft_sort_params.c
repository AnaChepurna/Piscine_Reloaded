/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 20:39:55 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/25 11:41:47 by achepurn         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	str_swap(char **str1, char **str2)
{
	char	*helper;

	helper = *str1;
	*str1 = *str2;
	*str2 = helper;
}

int		main(int argv, char **argc)
{
	int		i;

	if (argv < 2)
		return (0);
	i = 1;
	while (argc[i + 1])
	{
		if (i < 1)
			i = 1;
		if (ft_strcmp(argc[i], argc[i + 1]) <= 0)
			i++;
		else
		{
			str_swap(&argc[i], &argc[i + 1]);
			i--;
		}
	}
	i = 1;
	while (i < argv)
	{
		ft_putstr(argc[i++]);
		ft_putchar('\n');
	}
}
