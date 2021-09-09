int strConteins(char* a, char* str)
{
	int  flag = 0, i = 0, j = 0, check = 0;
	while (str[i] != '\0' && a[j] != '\0')
	{
		flag = 0;
		if (str[i] != a[j])
		{
			flag = -1;
			check++;
		}
		else
		{
			j++;
			i++;
			while (str[i] != '\0' || a[j] != '\0') {
				if (str[i] != a[j])
				{
					flag = -1;
					check = -2;
					break;
				}
				else 
				{
					flag = 0;
				}
				j++;
				i++;
			}
		}
		i++;
	}
	check++;
	return check;
}