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

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
	const char	src[] = "hellolaaa";
	char	dst[];
	char	c = "l";
	size_t	n;
	n = strlen(src);
	char ans = ft_memccpy(dst,src,c,n);
	printf("The Answer is %s\n", ans);
}
