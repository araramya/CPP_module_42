NAME = fragtrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = $(shell find "." -name "*.cpp")
OBJS = ${SRCS:.cpp=.o}

all:  ${NAME}

${NAME}: ${OBJS}
		${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
		rm -rf ${OBJS}

fclean: clean
	${RM} ${NAME}

re : fclean all


.PHONY: all clean fclean re