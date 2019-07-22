/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:54:25 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/22 13:07:40 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i + j] = s[j];
		j++;
	}
	s[i + j] = '\0';
	return (s1);
}

int	main()
{
	char	s1[] = "Hello";
	char	s2[] = "World";

	ft_strncat(s1, s2);
	printf("This is the concatinated string : %s\n", s1);
	return (0);
}
