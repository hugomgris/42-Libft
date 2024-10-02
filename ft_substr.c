/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:10:13 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/23 14:01:07 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	strlen;
	char	*str;

	if (!s)
		return (NULL);
	strlen = 0;
	slen = ft_strlen(s);
	if (start < slen)
	{
		if ((start + len) > slen)
			strlen = slen - start;
		else
			strlen = len;
	}
	str = (char *)malloc(sizeof(*s) * (strlen + 1));
	if (str == NULL)
		return (NULL);
	str = (char *)ft_memcpy(str, (s + start), strlen);
	*(str + strlen) = '\0';
	return (str);
}
