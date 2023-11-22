
/**
 * _strdup - fucntion duplicates string passed in argument
 * @str : input string
 * Return: a pointer to a new duplicate string
**/

char *_strdup(char *str)
{

	int i, j;
	char *dupString;

	if (str == '\0')
	{
		return (NULL);
	}

	/*Get the length of the passed string we want to duplicate*/
	while (str[i] != '\0')
	{
		i++ /*Here we store the length*/
	}

	dupString = malloc(sizeof(char) * (i + 1)) /*+1 for null terminator*/

	if (dupString == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		dupString[j] = str[j];
	}

	return (dupString);
}
