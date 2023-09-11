NAME	= Sed
SRC		= main.cpp
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
CC		= g++ ${FLAGS}
OBJ		= ${SRC:.cpp=.o}

.o:.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

