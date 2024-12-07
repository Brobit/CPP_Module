NAME = phonebook

CC = g++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = ./main.cpp\
		  ./Phonebook.cpp\
		  ./Contact.cpp

INCLUDES = ./Phonebook.hpp\
		   ./Contact.hpp

OBJ = ${SOURCES:.cpp=.o}

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
