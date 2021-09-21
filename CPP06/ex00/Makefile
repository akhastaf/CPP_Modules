C = clang++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME = Scalar

SRC = main.cpp Scalar.cpp

OBJ = main.o Scalar.o

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