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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	unsigned const char	*p2;
	size_t				i;

	
	i = 0;
	p = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	else
		while (len-- > 0)
			*(p++) = *(p2++):
	return (dst);
}

int	main()
{
	const char	src[] = "newstring";
	char		dst[] = "oldstring";

	printf("Before memmove dst = %s, src = %s\n", dst, src);
	ft_memmove(dst, src, 9);
	printf("After memmove dst = %s, src = %s\n", dst, src);
	return (0);
}
