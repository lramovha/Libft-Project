/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:34:47 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/19 11:11:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char p;
	unsigned char p2;
	
	i =  0;
	p = (unsigned char)s1;
	p2 = (unsigned char)s2;
	while (i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i])

}

int main()
{
	char	s1[] = "Hello";
   	char	s2[] = "Hello";
	int		n = 3;
	ft_memcmp(s1, s2, n);
}
