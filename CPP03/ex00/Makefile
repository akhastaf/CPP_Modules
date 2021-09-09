C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = ClapTrapp

SRC = main.cpp ClapTrapp.cpp ClapTrapp.cpp

OBJ = main.o ClapTrapp.o

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