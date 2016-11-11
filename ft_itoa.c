/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:38:43 by tdumouli          #+#    #+#             */
/*   Updated: 2016/11/11 10:49:47 by tdumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_itoa(int n)
{
	int		nb;
	char	*tab;
	int		len;

	nb = n;
	len = 1 + (n < 0);
	while (nb /= 10)
		len++;
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	*(tab + len) = '\0';
	if (n < 0)
		*(tab) = '-';
	else
		n = -n;
	while (--len + 1 - (*tab == '-'))
	{
		*(tab + len) = '0' - (n % 10);
		n /= 10;
	}
	return (tab);
}
