NAME	= interface
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp
INC		= AMateria.hpp Character.hpp MateriaSource.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp
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