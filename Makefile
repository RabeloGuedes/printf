NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
INCLUDE = include

LIBFT = libft

GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
STRONG_RED = \033[0;91m

all: $(NAME)

$(NAME):
	@make -s --directory=$(LIBFT)
	@cp $(LIBFT)/libft.a ./
	@mv $(LIBFT).a $(NAME)
	@echo "$(GREEN) $(NAME) complied!"

clean:
	@make -s clean --directory=$(LIBFT)
	@rm -r ./$(LIBFT)/libft.a
	@echo "$(RED) OBJ_FILES and $(LIBFT).a removed!"

fclean:
	@make -s fclean --directory=$(LIBFT) 
	@rm -f $(NAME)
	@echo "$(STRONG_RED) $(NAME), $(LIBFT).a and OBJ_FILES removed!"

re: fclean all
