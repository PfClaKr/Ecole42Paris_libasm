NAME = libasm.a

SRCS =  ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_read.s \
		ft_write.s \
		ft_strcmp.s

NASM = nasm
NASMFLAGS = -felf64

CC = clang
CFLAGS = 

OBJS = $(SRCS:.s=.o)

%.o : %.s
		$(NASM) $(NASMFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		ar rc $@ $^

clean :
		@rm -rf $(OBJS)

fclean : clean
		@rm -rf $(NAME)
		@rm -rf test

re : fclean all

test :
			$(CC) $(CFLAGS) main.c $(NAME) -o test

.PHONY : all clean fclean re