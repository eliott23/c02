FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=ex03

SRC=main.cpp\
	Fixed.cpp\
	Point.cpp\
	bsp.cpp\

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) -o $@ $^

$(OBJ):$(SRC)
	c++ $(FLAGS) -c $^

clean:
	rm -rf $(OBJ);

fclean:clean
	rm -rf $(NAME)

re:fclean all
