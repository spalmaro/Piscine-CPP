NAME=a.out

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=main.cpp Human.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) -I Human.hpp

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all