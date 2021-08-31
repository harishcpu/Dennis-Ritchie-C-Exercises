
void escape(char to[], char from[])
{
	int i, j;
	i = j = 0;

	while (from[i] != '\0') {
		switch (from[i]) {
			case '\t' :
				to[j] = '\\';
				++j;
				to[j] = 't';
				break;
			case '\n' :
				to[j] = '\\';
				++j;
				to[j] = 'n';
				break;
			default :
				to[j] = from[i];
				break;
		}
		++i;
		++j;
	}
	to[j] = '\0';
}

