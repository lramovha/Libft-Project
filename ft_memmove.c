/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:29:24 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 14:43:41 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	unsigned const char	*p2;
	size_t				i;

	
	i = 0;
	p = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	else if (p > p2)
	{
		while
	}
}
