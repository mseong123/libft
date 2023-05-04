SRCS = $(wildcard *.c)

BONUS_NAME = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

BONUS_SRCS = $(BONUS_NAME:=.c)

OBJECTS = $(SRCS:.c=.o)

BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	ar r $(NAME) $(OBJECTS) $(BONUS_OBJECTS)
	ranlib $(NAME)

$(NAME): $(OBJECTS)
	ar r $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $<	

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
