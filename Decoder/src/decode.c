#include "../headers/decode.h"

void	encode_message(void)
{
	char	*line;
	int		value;
	int		count_nbrs;
	int		index;

	line = NULL;
	index = 0;
	line = readline("Type your message here: ");
	while (line[index])
	{
		value = line[index];
		value = value * 89 + 10;
		count_nbrs = nbr_len(value);
		printf("%d%d", count_nbrs, value);
		index++;
	}
	printf("\n");
	free(line);
}

void	decode_message(void)
{
	char	*line;
	int 	index;
	int		jump;

	line = NULL;
	index = 0;
	jump = 0;
	line = readline("Put your code here: ");
	while (line[index])
	{
		if (line[index] > 57 || line[index] < 48)
		{
			printf(BHRED"Code must only have numbers\n"reset);
			exit(2);
		}
		jump = convert_integer(line[index]);
		convert_message(jump, line, index + 1);
		index = index + jump + 1;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	char *line;
	(void)argv;

	if (argc != 1)
		return (printf(BHRED"This program doesn't need any type of extra arguments\n"reset));
	line = malloc(sizeof(char) * 2);
	if (!line)
		return (printf(BHRED"Allocation failed\n"reset));
	printf("\e[1;1H\e[2J");
	while (check_values(line));
	printf("\e[1;1H\e[2J");
	choose_path(line);
	free(line);
	return (0);
}