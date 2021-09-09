int strConteins(char* a, char* str)
{
	int  flag = 0, i = 0;
	while ((str[i] != '\0' || a[i] != '\0') && flag == 0)
	{
		flag = 0;
		if (str[i] != a[i]) {
			flag = -1;
			break;
		}
		i++;
	}

	return flag;
}