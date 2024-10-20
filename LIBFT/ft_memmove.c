/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsonmez <dsonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:20:45 by dsonmez           #+#    #+#             */
/*   Updated: 2024/10/18 17:16:48 by dsonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			len_of_dest;
	size_t			len_of_src;
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	len_of_dest = ft_strlen(dst);
	len_of_src = ft_strlen(src);
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst2);
}
