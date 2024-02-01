/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabou-me <zabou-me@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:45:14 by zabou-me          #+#    #+#             */
/*   Updated: 2024/01/20 16:15:50 by zabou-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	size_t	count;
	int		i;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	size_t	length;

	if (!ft_strchr(s, c))
		length = ft_strlen(s);
	else
		length = (ft_strchr(s, c) - s);
	return (length);
}

static char	**mem_free(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	len_word;
	size_t	i;

	lst = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len_word = word_len(s, c);
			lst[i] = ft_substr(s, 0, len_word);
			if (!lst[i])
				return (mem_free(lst, i));
			i++;
			s += len_word;
		}
	}
	lst[i] = NULL;
	return (lst);
}
