/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:46:19 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 13:21:48 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	
	p = (unsigned char *)b;
	while (len--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (b)
}

int main()
{
	void	b[] = "hello";
	sizet_t	len = 3;
}
