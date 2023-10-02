NAME	= Orthodox

FLAGS	= -Werror -Wextra -Wall -std=c++98

SRC	= main.cpp Fixed.cpp

RM	= rm -f

CC	= g++ $(FLAGS)

OBJ	= $(SRC:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

claean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
