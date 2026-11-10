/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: shicai <shicai@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/11/09 12:17:17 by shicai        #+#    #+#                 */
/*   Updated: 2026/11/10 15:14:06 by shicai        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h> /* for ssize_t */
# include <unistd.h> /* read(), close() */
# include <fcntl.h>  /* open() */
# include <stdio.h> /* printf() */
# include <stdlib.h> /* free() */

/* The main functions */
char	*get_next_line(int fd);
char	*extract_line(char *stash);

/* The helper functions */
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif