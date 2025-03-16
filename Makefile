NAME		= libftprintf.a

CFLAGS		= -Werror -Wall -Wall

SRC			= ft_printf.c ft_printf_tools.c

OBJ			= $(SRC:.c=.o)

HEADER	 	= ft_printf.h

LIBFT		= ./libft/libft.a

all	:		$(NAME)

$(NAME) :	$(OBJ)
				ar -rcs $(NAME) $(HEADER) $(OBJ)
				@echo "make is done correctly."

$(OBJ) :	$(SRC)
				$(MAKE) -C ./libft
				cp $(LIBFT) $(NAME)
				cc $(CFLAGS) $(HEADER) -c $(SRC)
				@echo "object create properly."

clean : 
				$(MAKE) -s clean -C ./libft
				rm -f $(OBJ)
				@echo "clean done."

fclean :	clean
				$(MAKE) -s fclean -C ./libft
				rm -f $(NAME)
				@echo "full cleaned."

re :		fclean all
				@echo "full clean done, make done."

.PHONY :	all clean fclean re
