#include "../headers/decode.h"

int	convert_integer(char str)
{
	signed int	result;

	result = 0;
	result = result * 10 + str - '0';
	return (result);
}

int		nbr_len(int value)
{
	int count;

	count = 0;
	while (value > 9)
	{
		value = value / 10;
		count++;
	}
	return (count + 1);
}

void	choose_path(char *line)
{
	if (line[0] == '1')
		encode_message();
	if (line[0] == '2')
		decode_message();
}

void	convert_message(int jump, char *line, int index)
{
	char 	*backup;
	int		i;
	int 	value;

	i = 0;
	value = 0;
	backup = malloc(sizeof(char) * jump + 1);
	if (!backup)
		return ;
	while (i < jump)
	{
		if (line[index] > 57 || line[index] < 48)
		{
			printf(BHRED"Code must only have numbers\n"reset);
			exit(3);
		}
		backup[i] = line[index++];
		i++;
	}
	backup[i] = '\0';
	value = atoi(backup);
	value = value - 10;
	value = value / 89;
	printf("%c", value);
	free(backup);
}