NAME	=	ex03

SRCS	:=	$(shell find . -name '*.cpp')

HEAD	:=	$(shell find . -name '*.h')

G++		= 	g++ -Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(G++) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

$(OBJS):	$(HEAD)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
