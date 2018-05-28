NAME=apocalypse

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=main.cpp Zombie.cpp ZombieEvent.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I ZombieEvent.hpp -I Zombie.hpp

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all