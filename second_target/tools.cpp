#include "main.hpp"

char **make_dbl_arr(char *p, int len_arr)
{
	char **arr = new char *[len_arr];
	for (int i = 0; i < len_arr; i++)
	{
		arr[i] = new char[len_arr];
		for (int j = 0; j < len_arr; j++)
		{
			arr[i][j] = *p;
			p++; 
		}
	}
	return arr;
}

void out_dbl_arr(char **arr, int len_arr)
{
	for (int i = 0; i < len_arr; i++)
	{
		for (int j = 0; j < len_arr; j++)
			cout << arr[i][j];
		cout << endl;
	}
}