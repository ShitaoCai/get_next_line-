/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/09 12:19:51 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/10 15:26:23 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char *stash)
{
	char *newline;
	
	newline = ft_strchr(stash, '\n');
	return(ft_substr(stash, newline - stash, ft_strlen(stash)));
	
}

char	*ft_strchr(const char *s, int c)
{
	while(*s && *s != c)
	{
		s++;
	}
	return(s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(sizeof(char *));
	if (!str)
		free(str);
	str = s;
	if (*str && len > start)
		return ((str + start));
	return (NULL);
}