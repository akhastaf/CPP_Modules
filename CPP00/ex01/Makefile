C = clang++

FLAGS = -Wall -Wextra -Werror

NAME = phonebook

SRC = phonebook.cpp contact.cpp

OBJ = phonebook.o contact.o

all: $(NAME)

$(NAME): $(SRC)
		@$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all
	