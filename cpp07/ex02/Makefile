NAME	= jopa
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp
INC		= Array.hpp
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp $(INC)
	clang++ $(FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -std=c++98 $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean