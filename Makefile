SRCSDIR = ./

SRCS = ${SRCSDIR}ft_atoi.c ${SRCSDIR}ft_isspace_bonus.c ${SRCSDIR}ft_strndup_bonus.c ${SRCSDIR}ft_bzero.c ${SRCSDIR}ft_calloc.c ${SRCSDIR}ft_isalnum.c ${SRCSDIR}ft_isalpha.c	${SRCSDIR}ft_isascii.c ${SRCSDIR}ft_isdigit.c ${SRCSDIR}ft_islower_bonus.c ${SRCSDIR}ft_isprint.c ${SRCSDIR}ft_isupper_bonus.c ${SRCSDIR}ft_itoa.c ${SRCSDIR}ft_memccpy.c ${SRCSDIR}ft_memchr.c ${SRCSDIR}ft_memcmp.c ${SRCSDIR}ft_memcpy.c ${SRCSDIR}ft_memmove.c ${SRCSDIR}ft_memset.c ${SRCSDIR}ft_putstr_fd.c ${SRCSDIR}ft_putchar_fd.c ${SRCSDIR}ft_putendl_fd.c ${SRCSDIR}ft_putnbr_fd.c ${SRCSDIR}ft_split.c ${SRCSDIR}ft_strchr.c ${SRCSDIR}ft_strdup.c ${SRCSDIR}ft_strjoin.c ${SRCSDIR}ft_strlcat.c ${SRCSDIR}ft_strlcpy.c ${SRCSDIR}ft_strlen.c ${SRCSDIR}ft_strmapi.c ${SRCSDIR}ft_strncmp.c ${SRCSDIR}ft_strnstr.c ${SRCSDIR}ft_strrchr.c ${SRCSDIR}ft_strtrim.c ${SRCSDIR}ft_substr.c ${SRCSDIR}ft_tolower.c ${SRCSDIR}ft_toupper.c

SRCS_BONUS = ${SRCSDIR}ft_lstnew.c ${SRCSDIR}ft_lstadd_front.c ${SRCSDIR}ft_lstsize.c ${SRCSDIR}ft_lstlast.c ${SRCSDIR}ft_lstadd_back.c ${SRCSDIR}ft_lstdelone.c ${SRCSDIR}ft_lstclear.c ${SRCSDIR}ft_lstiter.c ${SRCSDIR}ft_lstmap.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

HEADER = -I libft.h

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror 

%.o: %.c	libft.h
			${CC} ${CFLAGS} -c $< $(HEADER)  -o ${<:.c=.o}

$(NAME) :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

bonus: 	$(OBJS_BONUS)
		ar rc ${NAME} ${OBJS_BONUS}
		ranlib ${NAME}
			
all :		${NAME} 

clean :
			${RM} *.o

fclean :	clean 
			${RM} ${NAME}

re :		fclean all

rebonus :  fclean bonus

.PHONY	:	bonus clean fclean all re rebonus


