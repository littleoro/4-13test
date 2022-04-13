#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void string(char arr[])
{
	int i = 0;
	int j = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] != ' ')
		{
			if (i == j)
			{
				i++;
				j++;
			}
			else
				i++;
		}
		else
		{
			while(arr[j]==' ')
			{
			    j++;
			}
				arr[i] = arr[j];
				arr[j] = ' ';
		}
	}
}
int suansize(char* arr)
{

	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	return size;
}
void delsur(char arr1[], char arr2[])
{
	int size1 = suansize(arr1);
	int size2 = suansize(arr2);
	int i = 0;
	int j = 0;
	while (i <size1)
	{
		if (arr1[i] == arr2[j])
		{
			i++;
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
		if (j == size2)
		{
			int z = 0;
			for (z = 1; z <= size2; z++)
			{
				arr1[i - z] = ' ';
			}
		}
	}
	string(arr1);
}
int main()
{
	char arr1[] = "lalalalahellolalalahellolalalalahello";
	char arr2[] = "hello";
	delsur(arr1, arr2);
	printf("%s", arr1);
	return 0;
}