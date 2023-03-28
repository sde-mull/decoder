#include "../headers/decode.h"

int check_values(char *str)
{
	char *line;

	line = NULL;
	printf(BBLU"\nWelcome to the decoder"reset"\n\nChoose your option:\n\n(1) Encode a message\n\n(2) Decode a message\n\n(q) Exit");
	line = readline("\n");
	if (line == NULL || line[0] == 0)
	{
		free(line);
		return (printf(BHRED"\e[1;1H\e[2J Press 1 or 2 to choose your option\n"reset));
	}
	if ((line[0] != '1' && line[0] != '2' && line[0] != 'q') || line[1] != '\0')
	{
		free(line);
		return (printf(BHRED"\e[1;1H\e[2J Invalid input\n"reset));
	}
	str[0] = line [0];
	str[1] = '\0';
	free(line);
	return (0);
}