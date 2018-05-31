NAME=a.out

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I FragTrap.hpp -I ScavTrap.hpp -I ClapTrap.hpp -I NinjaTrap.hpp -I SuperTrap.hpp

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all