NAME=a.out

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp main.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I ISpaceMarine.hpp -I AssaultTerminator.hpp -I ISquad.hpp -I Squad.hpp -I TacticalMarine.hpp 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all