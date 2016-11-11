/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 02:51:32 by tdumouli          #+#    #+#             */
/*   Updated: 2016/11/11 14:24:06 by tdumouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*d;
	unsigned int	i;

	d = NULL;
	i = -1;
	while (++i < size && !d)
		if (*(unsigned char *)(s + i) == c)
			d = (unsigned char *)s + i;
	return (d);
}
