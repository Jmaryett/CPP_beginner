NAME	= dynamic
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp
INC		= A.hpp B.hpp C.hpp Base.hpp
OBJ		= $(SRC:.cpp=.o)


%.o: %.cpp $(INC)
	c++ $(FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	c++ -std=c++98 $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean