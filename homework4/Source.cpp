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

	//Given the int array arr, generate another int array output.
	//whose element indiciates how many elements in arr is smaller than arr[i].
	//For example, if arr is given as [5,8,5,6,8,1,5,9,5,8], 
	//output should be [1,6,1,5,6,0,1,9,1,6]. 

	int* output = new int[arrsize];
	cout << "Array output: ";
	
	/***********************************
	Implement the code here!
	************************************/
	for (int i = 0; i < arrsize; i++) {
		int s = 0;
		for (int j = 0; j < arrsize; j++) {
			if (arr[i] > arr[j]) {
				s++;
			}
		}
		output[i] = s;
	}

	for (int i = 0; i < arrsize; i++) {
		cout << output[i] << " ";
	}
	return 0;
}