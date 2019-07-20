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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	
	p = (unsigned char *)b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b)
}

int main()
{
	const char	c[] = "c"
	char		b[] = "hello";
	
	printf("string before memset = %s\n", b);
	ft_memset(b, c, 3);
	printf("string after memset = %s\n", b);
}
