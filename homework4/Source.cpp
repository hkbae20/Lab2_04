#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

bool isSmaller(int input, int other)
{
	return other < input;
}

int main()
{
	const int arrsize = 10;
	int* arr = new int[arrsize];
	srand((unsigned int)time(NULL));
	cout << "Array arr: " ;
	for (int i = 0; i < arrsize; i++)
	{
		arr[i] = (rand() % 10);
		cout << arr[i] << " ";
	}
	cout << endl;

	//Given the int array arr, generate another int array output.
	//whose element indiciates how many elements in arr is smaller than arr[i].
	//For example, if arr is given as [5,8,5,6,8,1,5,9,5,8], 
	//output should be [1,6,1,5,6,0,1,9,1,6]. 

	int* output = new int[arrsize];
	cout << "Array output: ";
	for (int outer = 0; outer < arrsize; outer++)
	{
		int count_smaller = 0;
		for (int inner = 0; inner < arrsize; inner++)
		{
			if (isSmaller(arr[outer], arr[inner]))
			{
				count_smaller++;
			}

			output[outer] = count_smaller;
		}
	}

	for (int i = 0; i < arrsize; i++) {
		cout << output[i] << " ";
	}
	return 0;
}