C = clang++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME = DiamondTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

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