NAME=cato9tails

CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC=main.cpp
OBJ=$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all