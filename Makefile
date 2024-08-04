NAME = libasm

LIB = libasm.a

SRCS =  ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_read.s \
		ft_write.s \
		ft_strcmp.s

NASM = nasm
NASMFLAGS = -f elf64

CC = gcc
CFLAGS = -no-pie

OBJS = $(SRCS:.s=.o)

%.o : %.s
		$(NASM) $(NASMFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		ar rcs $(LIB) $(OBJS)

clean :
		@rm -rf $(OBJS)

fclean : clean
		@rm -rf $(LIB)
		@rm -rf test

re : fclean all

test :
			$(CC) $(CFLAGS) main.c $(LIB) -o test

.PHONY : all clean fclean re