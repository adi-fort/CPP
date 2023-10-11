NAME	= Brain

SRC		= $(wildcard *.cpp)

CC		= c++

FLAGS	= -Werror -Wextra -Wall -std=c++98

OBJ		= $(SRC:.cpp=.o)

RM		= rm -f

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
