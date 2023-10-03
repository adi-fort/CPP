NAME	= ClapTrap

SRC		= $(wildcard *.cpp)

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= g++

RM		= rm -f

OBJ		= $(SRC:.cpp=.o)

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
