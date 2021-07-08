C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = Zombie

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJ = Zombie.o newZombie.o randomChump.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all
	