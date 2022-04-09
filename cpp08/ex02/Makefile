NAME	= mutantStack
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp MutantStack.cpp
INC		= MutantStack.hpp
OBJ		= $(SRC:.cpp=.o)


%.o: %.cpp $(INC)
	c++ $(FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean