NAME = libftprintf.a
INCLUDE = printf.h

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf
AR = ar crs

SRC = \ 
	ft_printf.c\
	ft_putchar_pf.c\
	ft_putstr_pf.c\
	ft_putnbr_pf.c\
	ft_putuint_pf.c\
	ft_puthex_pf.c\
	ft_putptr_pf.c\
	ft_aux_pf.c

OBJS = $(src:.C=.O)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c printf.h
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re