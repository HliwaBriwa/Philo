CC = cc -Wall -Wextra -Werror

####################

HLP = Helpers/Helpers.c \
		Helpers/H_Parsing.c \
		Helpers/atoi.c \
		Helpers/garbage_collector.c

H_OBJ = $(HLP:.c=.o)

####################

SRC = ./Core.c 

OBJ = $(SRC:.c=.o)

####################

NAME = philo

all : $(NAME)

$(NAME) : $(OBJ) $(H_OBJ)

	$(CC) $(OBJ) $(H_OBJ) -o $(NAME)

$(OBJ) : ./philo.h $(SRC)

	$(CC) -c $(SRC) -o $(OBJ)

%.o : %.c ./philo.h
	$(CC) -c $< -o $@

clean :

	rm -f $(OBJ) $(H_OBJ) 

fclean : clean

	rm -f $(NAME)

re : fclean all