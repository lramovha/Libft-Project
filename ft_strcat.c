/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:52:56 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/22 12:47:33 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while(s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	mian()
{
	char	s1[] = "Hello";
	char	s2[] = "World";

	printf("this is the string s1 without strcat : %s\n", s1);
	ft_strcat(s1, s2);
	printf("This is the string s1 with strcat : %s\n", s1);
	return (0);
}
