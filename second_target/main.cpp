#include "main.hpp"
using namespace std;

// vector<int> subset;

    // if (k == 4){
    //     for (int i = 0; i < subset.size(); i++)
    //         cout << subset[i] << " ";
    //     cout << endl;
    // }
    // else {
    //     subset.push_back(k);
    //      search(k+1);
    //      subset.pop_back();
    //      search(k + 1);
    // }
	//koren

bool find_in_arr(char **arr, char c, int len_arr, int &index_i, int &index_j)
{
	for (int i = 0; i < len_arr; i++)
		for (int j = 0; j < len_arr; j++)
			if (arr[i][j] == c)
			{
				index_i = i;
				index_j = j;
				return 1;
			}
	return 0;
}

void search(char **arr, char *key, int len_arr)
{
	int len_key;
	int index_i;
	int index_j;

	len_key = strlen(key);
	for (int i = 0; i < len_key; i++)
	{
		index_i = 0;
		index_j = 0;
		if(find_in_arr(arr, key[i], len_arr, index_i, index_j) && i < len_key - 1)
			cout << "[" << index_i << "," << index_j << "]->";
	}
	cout << "[" << index_i << "," << index_j << "]" << endl;
}

int valid_args(int argc, char **argv)
{
	int len_arr;

	if (argc != 3)
	{
		cout << "incorect number of arguments\nneed 2 arguments\n";
		return 1;
	}
	len_arr = sqrt(strlen(argv[1]));
	if (strlen(argv[1]) - len_arr * len_arr)
	{
		cout << "incorect number of char\nneed to arr 2^2\n";
		return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int len_arr;
	char **arr;
	
	if(valid_args(argc, argv))
		return 0;
	len_arr = sqrt(strlen(argv[1]));
	arr = make_dbl_arr(argv[1], len_arr);

	
	out_dbl_arr(arr, len_arr);
    search(arr, argv[2], len_arr);
    return 0;
}
