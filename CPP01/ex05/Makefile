NAME	= Harl

SRC		= main.cpp Harl.cpp

FLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -f

CC		= g++ ${FLAGS}

OBJ		= ${SRC:.cpp=.o}

.o:.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FALGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
