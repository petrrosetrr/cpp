NAME	=	ex01

SRCS	:=	$(shell find . -name '*.cpp')

HEAD	:=	$(shell find . -name '*.h')

G++		= 	clang++ -Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(G++) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

.cpp.o:
			$(G++) -c $< -o $(<:.cpp=.o)

$(OBJS):	$(HEAD)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
