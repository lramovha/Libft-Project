/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:56:06 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/22 13:37:20 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	while(dst[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] = '\0')
	{
		i++;
	}
	if (dstsize <= i)
		n = n + dstsize;
	else
		n = n + i;
	j = 0;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i++] =  src[j++];
	}
	dst[i] = '\0';
	return (n);
}
