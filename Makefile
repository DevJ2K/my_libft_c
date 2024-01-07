########################################
########## VARIABLES
NAME = libft.a
CC = cc
INCLUDES = ./includes
RM			= rm -rf
AR			= ar -crs
CFLAGS = -Wall -Werror -Wextra -I
SRCS_DIR = srcs/

########################################
########## COLORS
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
BOLD_RED = \033[1;91m
RED = \033[0;91m
GREEN = \033[1;92m
YELLOW = \033[1;93m
BLUE = \033[1;94m
MAGENTA = \033[1;95m
CYAN = \033[1;96m
WHITE = \033[1;97m

########################################
########## SOURCES
LIBC_F =	ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha \
		ft_isascii ft_isdigit ft_isprint ft_memchr \
		ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr \
		ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp \
		ft_strnstr ft_strrchr ft_tolower ft_toupper ft_strcpy \
		ft_strncat get_next_line get_next_line_utils ft_error ft_open
LIBC		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(LIBC_F)))

ADDITIONAL_F =	ft_itoa ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd \
				ft_split ft_strjoin ft_strmapi ft_strtrim ft_substr ft_striteri
ADDITIONAL		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(ADDITIONAL_F)))

BONUS_F =	ft_lstadd_back ft_lstadd_front ft_lstclear \
		ft_lstdelone ft_lstiter ft_lstlast \
		ft_lstmap ft_lstnew ft_lstsize
BONUS		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_F)))

PRINTF_F = ft_printf ft_putchar ft_puthexa ft_strlen \
			ft_putnbr ft_putptr ft_putstr ft_putunsigned
PRINTF =	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(PRINTF_F)))

SRCS = $(LIBC) $(ADDITIONAL) $(BONUS) $(PRINTF)

OBJS = $(SRCS:.c=.o)

.c.o:
#@echo "$(YELLOW)Compilation of : $<..$(DEF_COLOR)"
		@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

########################################
########## RULES
$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)Libft successfully compiled into$(DEF_COLOR) $(WHITE)$(NAME)$(DEF_COLOR) $(GREEN)!$(DEF_COLOR)"

$(OBJS): | display_message

display_message:
	@echo "$(CYAN)Libft is compiling...$(DEF_COLOR)"


all:	$(NAME)

clean:
		@$(RM) $(OBJS)
		@echo "$(RED)Deletion of $(OBJS)$(DEF_COLOR)"

fclean:	clean
		@$(RM) $(NAME)
		@echo "$(BOLD_RED)Deletion of $(NAME)$(DEF_COLOR)"

re:		fclean all

.PHONY: all clean fclean re
