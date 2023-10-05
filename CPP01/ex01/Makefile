NAME	= Horde
SRC		= $(wildcard *.cpp)
FLAGS	= -Werror -Wall -Wextra -std=c++98
RM		= rm -f
CC		= c++
OBJ		= ${SRC:.cpp=.o}

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
