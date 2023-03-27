#ifndef DECODE_H
# define DECODE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "color_codes.h"


int		check_values(char *str);
int		convert_integer(char str);
int		nbr_len(int value);
void	choose_path(char *line);
void	convert_message(int jump, char *line, int index);
void	decode_message(void);
void	encode_message(void);

#endif