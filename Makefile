SRCS = $(wildcard *.c)

OBJECTS = $(SRCS:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar r $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS):$(SRCS)
	cc -c $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
