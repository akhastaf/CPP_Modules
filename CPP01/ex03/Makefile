C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = ex03

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJ = HumanA.o HumanB.o Weapon.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all
	