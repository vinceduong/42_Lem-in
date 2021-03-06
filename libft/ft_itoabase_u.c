/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:43:25 by carmenia          #+#    #+#             */
/*   Updated: 2018/09/30 15:48:03 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(uintmax_t value, char *base)
{
	int i;
	int	n;

	n = ft_strlen(base);
	i = 0;
	while (value > 0)
	{
		i++;
		value = value / n;
	}
	return (i);
}

static void	ft_fillitoa(char *str, uintmax_t l, char *base)
{
	int i;
	int k;
	int n;

	n = ft_strlen(base);
	i = 0;
	k = ft_countdigits(l, base);
	while (l > 0)
	{
		str[i] = base[l % n];
		l = l / n;
		i++;
	}
}

char		*ft_itoabase_u(uintmax_t value, char *base)
{
	int		k;
	char	*str;

	if (value == 0)
		return (ft_strdup("0"));
	k = ft_countdigits(value, base);
	if (!(str = ft_strnew(k)))
		return (0);
	str[k] = '\0';
	ft_fillitoa(str, value, base);
	return (ft_strrev(str));
}
