/**
 * _isalpha - Entry point
 * @c: entry point
 * Return: si characteres en minuscule afficher 1 sinon 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
