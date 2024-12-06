NAME = megaphone

CC = cc

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = ./Megaphone.cpp

OBJ = {SOURCES:.cpp=.o}

INCLUDES = 

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o $@ 

%.o : %.cpp
	${CC} ${FLAGS} ${INCLUDES} -c $< -o $@ 

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
