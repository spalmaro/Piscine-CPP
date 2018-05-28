NAME=a.out

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=main.cpp Logger.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I Logger.hpp

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) Logger

re: fclean all