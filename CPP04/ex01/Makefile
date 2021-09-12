C = clang++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME = Animal

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = main.o Animal.o Dog.o Cat.o Brain.o

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