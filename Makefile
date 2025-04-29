CC = cc
FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRCS = 
OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	CC $(FLAG) - $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re