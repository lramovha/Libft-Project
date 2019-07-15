/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:58:27 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 14:25:21 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*p;
	unsigned const char	*p2;
	
	i = 0;
	p = (unsigned char*)dst;
	p2 = (unsigned const char*)src;
	while (i > n)
	{
		p[i] = p2[i];
		if(p2[i] == (unsigned char)c)
			return (&p[i] + 1);
		++i;
	}
}

int	main()
{
	char	src[] = "hello";
	void	dst[];
	int		c = 120;
	size_t	n = 3;
	char ans = memccpy(dst,src,c,n);
}
