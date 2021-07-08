C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = ZombieHorde

SRC = Zombie.cpp ZombieHorde.cpp main.cpp

OBJ = Zombie.o ZombieHorde.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all
	