NAME= libft.a

FILES= ft_isalpha.c\
 		ft_strchr.c\
		ft_tolower.c\
		ft_isascii.c\
		ft_memcmp.c\
		ft_strncmp.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_isdigit.c\
		ft_memcpy.c\
		ft_strlcat.c\
		ft_bzero.c\
		ft_isprint.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_isalnum.c\
		ft_memchr.c\
		ft_memset.c\
		ft_strlen.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strrchr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_substr.c

OBJS = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:	fclean all