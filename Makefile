NAME 		= libft.a

SRCS 		= 	ft_atoi.c \
				ft_memset.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strrchr.c \
				ft_strlcpy.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_split.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c

SRC_BONUS	=	ft_lstnew.c \
				ft_lstsize.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS 		= $(SRCS:.c=.o)

BONUS		= $(SRC_BONUS:.c=.o)

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all: 		$(NAME)

%.o: 		%.c
			cc -Wall -Wextra -Werror -c -I. $< -o $@

bonus:		$(OBJS) $(BONUS)
			ar rcs $(NAME) $^

clean:
			rm -f $(OBJS) $(BONUS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
