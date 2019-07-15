/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:44:12 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 16:17:45 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	unsigned const char	*p;
	unsigned char		*p2;
	size_t				i;

	i = 0;
	p = (unsigned const char*)s;
	p2 = (unsigned char*)c;
	while (i < n)
	{
		if (p[i] == p2)
			return ((void*)&p[i]);
		++i;
	}
	return (NULL);
}
