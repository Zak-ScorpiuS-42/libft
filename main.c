/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabou-me <zabou-me@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:06:04 by zabou-me          #+#    #+#             */
/*   Updated: 2024/01/20 21:16:54 by zabou-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

char	ejemplo(unsigned int a, char c)
{
	return (ft_toupper(c));
}

void	example(unsigned int a, char *c)
{
	*c = *c + 1;
}

int	main(void)
{
	/*
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('0'));
	printf("%zu\n", ft_strlen("Hello World!"));
	*/
	/*
	char test[10];
	ft_memset(test, 'a', sizeof(char) * 10);
	for (int i = 0; i < 10; i++)
		printf("%c", test[i]);
	printf("\n");
	ft_bzero(test, sizeof(char) * 10);
	for (int i = 0; i < 10; i++)
        printf("%d", test[i]);
    printf("\n");
	*/
	/*
	char s1[] = "qwertyuiop";
	char s2[11];
    ft_memcpy(s2, s1, sizeof(char) * 11);
    printf("%s\n", s2);
	*/
	/*
	char s3[] = "qwertyuiop";
	printf("%s\n", s3);
	ft_memcpy(s3+4, s3, sizeof(char) * 4);
    printf("%s\n", s3);
	char s4[] = "qwertyuiop";
	printf("%s\n", s4);
	ft_memmove(s4+4, s4, sizeof(char) * 4);
	printf("%s\n", s4);
	*/
	/*
	char s5[] = "first part";
	char s6[] = " the rest of it";
	ft_strlcpy(s6, s5, sizeof(char) * 6);
	printf("%s\n", s6);
	*/
	/*
	char *s7 = ft_strdup("This and");
	char *s8 = ft_strdup(" That");
	ft_strlcat(s7, s8, 20);
	printf("%s\n", s7);
	printf("%s\n", s8);
	*/
	/*
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_tolower('A'));
	*/
	/*
	char mail[] = "planet.solarsystem@milkyway.univers";
	printf("%s\n", ft_strchr(mail, '.'));
	printf("%s\n", ft_strrchr(mail, '.'));
	*/
	/*	
	char	str[] = "Hello 42 World!";
	char	needle[] = "42";
	printf("%s\n", ft_strnstr(str, needle, 10));
	*/
	/*
	int	*array;
	array = ft_calloc(10, sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
		printf("%d", array[i]);
	*/
	/*
	printf("%s\n", ft_strdup("test"));
	return (0);
	*/
	/*
	char	s10[] = "hello 42 world";
	char	s11[] = " Rocks";

	printf("%s\n", ft_substr(s10, 6, 8));
	printf("%s\n", ft_strjoin(s10, s11));
	*/
	/*
	char	s12[] = "       welcome to hell        ";
	char	s13[] = " ";

	printf("%s\n", ft_strtrim(s12, s13));
	*/
	/*
	char	s14[] = "    Today   was a shitty  crap day   for me, I lost the keys and payed a thief to break into my appartment, by destroying the door... total expense 600 bucks!";
	
	for (int i = 0; i < 29; i++)
		printf("%s\n", ft_split(s14, ' ')[i]);
	*/
	
	printf("%s\n", ft_itoa(-2147483648));
	
	/*
	char	s15[]= "aaaa bbbb cccc zzzz!";
	char	s16[]= "a";

	printf("%s\n", ft_strmapi(s15, ejemplo));
	ft_striteri(s16, example);
	printf("%s\n", s16);
	*/
	/*
	int	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);

	ft_putchar_fd('7', fd);
	close(fd);
	*/
	/*
	int fd2 = open("test2.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	char	s17[] = "Life is amazing!";
	char	s18[] = " Second parts usually... ";
	int	number = 424242;

	ft_putstr_fd(s17, fd2);
	ft_putendl_fd(s18, fd2);
	ft_putnbr_fd(number, fd2);
	close(fd2);
	*/


	return (0);
}
