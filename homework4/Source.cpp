#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;


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


	int* output = new int[arrsize];
	cout << "Array output: ";
	for (int j = 0; j < arrsize; j++) {
		int count = 0;
		for (int i = 0; i < arrsize; i++) {
			if (arr[j] > arr[i]) {
				count++;
			}

		}
		output[j] = count;
	}


	for (int i = 0; i < arrsize; i++) {
		cout << output[i] << " ";
	}
	return 0;
}