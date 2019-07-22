/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:48:57 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/19 11:51:43 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (s[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main()
{
	char	src[] = "HelloWorlddd";
	char	dst[];

	ft_strcpy(dst, src);
	printf("The is the copied string to dst is %s\n", dst);
	return (0);
}
