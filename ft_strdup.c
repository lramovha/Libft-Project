/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:47:00 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/19 11:48:40 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*new;
	int	i;
	
	i = 0;
	while (s1[i]0)
		i++;
	if (!(new = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main()
{
	char	s1[] = "HelloWorldddd";
	char	*result;

	result = ft_strdup(s1);
	printf("The string is %s\n", result);
	return (0);
}
