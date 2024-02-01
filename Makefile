# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zabou-me <zabou-me@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 23:54:00 by zabou-me          #+#    #+#              #
#    Updated: 2024/01/21 18:12:39 by zabou-me         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIB1 = ar -rcs

RM = rm -f

INCLUDE = 	 libft.h

SRCS =		 ft_atoi.c \
			 ft_bzero.c \
			 ft_calloc.c \
			 ft_isalnum.c \
			 ft_isalpha.c \
			 ft_isascii.c \
			 ft_isdigit.c \
			 ft_isprint.c \
			 ft_itoa.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c \
			 ft_putchar_fd.c \
			 ft_putendl_fd.c \
			 ft_putnbr_fd.c \
			 ft_putstr_fd.c \
			 ft_split.c \
			 ft_strchr.c \
			 ft_strdup.c \
			 ft_striteri.c \
			 ft_strjoin.c \
			 ft_strlcat.c \
			 ft_strlcpy.c \
			 ft_strlen.c \
			 ft_strmapi.c \
			 ft_strncmp.c \
			 ft_strnstr.c \
			 ft_strrchr.c \
			 ft_strtrim.c \
			 ft_substr.c \
			 ft_tolower.c \
			 ft_toupper.c 

OBJS = 		$(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c \
			 ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME): 	$(OBJS) $(INCLUDE) Makefile
			$(LIB1) $(NAME) $(OBJS)

bonus:		.bonus

.bonus:		$(NAME) $(BONUS_OBJS)
			touch .bonus
			$(LIB1) $(NAME) $(BONUS_OBJS)

all: 		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME) $(bonus)
			
re:			fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus
