NAME		= libftprintf.a

HEADER		= ft_printf.h

SRCS		= ft_printf.c \
		  		ft_print_p.c \
		  		ft_printfunc1.c \
		  		ft_printfunc2.c \
		  		ft_print_x.c 

OBJS		= $(SRCS:.c=.o)

CC			= cc

RM			= rm -f

CFLGAS		= -Wall -Werror -Wextra

.c.0:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(HEADER) $(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:	
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
