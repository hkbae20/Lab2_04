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



	for (int i = 0; i < arrsize; i++) {
		int a = 0;
		for (int j = 0; j < arrsize; j++) {
			if (arr[i] > arr[j]) {
				a++;
			}

		}
		output[i] = a;
	}
	
	cout << "Array output: ";

	for (int i = 0; i < arrsize; i++) {
		
		cout << output[i] << " ";
	}
	return 0;
}