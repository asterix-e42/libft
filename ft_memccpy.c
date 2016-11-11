/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:58:29 by tdumouli          #+#    #+#             */
/*   Updated: 2016/11/11 12:49:44 by tdumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int cmp, size_t n)
{
	char			*d;
	unsigned int	i;

	d = dest;
	i = -1;
	while ((++i < n) && ((*(char *)(src + i)) != cmp))
		*(d + i) = *(char *)(src + i);
	if (*(char *)(src + i) != cmp)
		return (NULL);
	*(d + i) = *(char *)(src + i);
	return (dest + i + 1);
}
