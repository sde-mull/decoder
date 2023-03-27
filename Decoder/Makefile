NAME		=	decode
CC			= 	cc
CFLAGS 		= 	-Wall -Werror -Wextra -I. -I/opt/homebrew/opt/readline/include -fsanitize=address
LFLAGS 		= 	-lreadline -L/opt/homebrew/opt/readline/lib

SRC_DIR 	= 	src/
SRCS		= 	$(shell find $(SRC_DIR) -maxdepth 1 -type f -name "*.c")


define HEADER
########  ########  ######   #######  ########  ######## ########  
##     ## ##       ##    ## ##     ## ##     ## ##       ##     ## 
##     ## ##       ##       ##     ## ##     ## ##       ##     ## 
##     ## ######   ##       ##     ## ##     ## ######   ########  
##     ## ##       ##       ##     ## ##     ## ##       ##   ##   
##     ## ##       ##    ## ##     ## ##     ## ##       ##    ##  
########  ########  ######   #######  ########  ######## ##     ##                                                                                                                                        
endef
export HEADER


all: $(NAME)

$(NAME): $(PRINT)
	@$(CC) $(CFLAGS) $(LFLAGS) $(SRCS) -o $(NAME)                                                                               
	@echo "\033[0;31m $$HEADER \033[0m"

init: re
	./$(NAME)

fclean:
		@$(RM) -r $(NAME)

re:	fclean all

.PHONY: all fclean re