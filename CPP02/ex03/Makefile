C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = bsp

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = main.o Fixed.o Point.o bsp.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC) -o $(NAME)

debug: $(SRC)
		@$(C) -g $(FLAGS) $(SRC) -o $(NAME) -fsanitize=address

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all
	