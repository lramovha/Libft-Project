/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:37:04 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 13:57:58 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p2;

	p = (unsigned char*)dst;
	p2 = (const unsigned char*)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n-- > 0)
	{
		*(p++) = *(p2++);
	}
	return (dst);
}

int	main()
{

}
