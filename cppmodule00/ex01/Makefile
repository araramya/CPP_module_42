NAME = phonebook
CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
SRCS = getset.cpp phonebook.cpp
OBJS = ${SRCS:.cpp=.o}

all:  ${NAME}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		rm -rf ${OBJS}

fclean: clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re