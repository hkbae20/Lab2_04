#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;


int main()
{
	const int arrsize = 10;
	int* arr = new int[arrsize];
	srand((unsigned int)time(NULL));
	cout << "Array arr: ";
	for (int i = 0; i < arrsize; i++)
	{
		arr[i] = (rand() % 10);
		cout << arr[i] << " ";
	}
	cout << endl;

	int* output = new int[arrsize];
	cout << "Array output: ";

	for (int a = 0; a < arrsize; a++) {
		int check = 0;
		for (int b = 0; b < arrsize; b++) {
			if (arr[a] > arr[b]) {
				check++;
			}
			output[a] = check;
		}
	}

	for (int i = 0; i < arrsize; i++) {
		cout << output[i] << " ";
	}
	return 0;
}