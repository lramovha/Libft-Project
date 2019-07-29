/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:57:59 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/19 12:02:08 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i++])
			return (NULL);
	}
	return ((char *)&s[i]);
}

int	main()
{
	const char	s[] = "HelloWorld";
	char	c = 'w';

	printf("This is the string without ft_strchr : %s\n", s);
	ft_strchr(s, c);
	printf("This is the string with ft_strchr : %s\n", s);
	return (0);
}
