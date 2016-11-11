/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:48:44 by tdumouli          #+#    #+#             */
/*   Updated: 2016/11/11 14:37:37 by tdumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s)
{
	int		sup_deb;
	int		sup_fin;
	int		ln;
	char	*ret;

	if (!s)
		return (NULL);
	sup_deb = 0;
	ln = -1;
	while (*(++ln + s))
		if (*(ln + s) == '\t' || *(ln + s) == ' ' || *(ln + s) == '\n')
			if (ln == sup_deb)
				sup_deb++;
			else
				sup_fin++;
		else
			sup_fin = 0;
	if (!(ret = (char *)malloc(sizeof(char) * ((ln -= sup_deb + sup_fin) + 1))))
		return (NULL);
	if (-sup_deb == ln)
		return (ret);
	*(ret + ln) = '\0';
	while (ln-- > 0)
		*(ret + ln) = *(s + sup_deb + ln);
	return (ret);
}
