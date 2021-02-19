#include<iostream>

using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = { 0,1,2,3,4,5,6,7,8,9 };
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}