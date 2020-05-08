#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] >= arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
	for (int x = 0; x < n;x++)
	{
		cout << arr[x] << " ";
	}

}
int main()
{
	int Arr[] = { 1,0,76,2,8,5,9,55 };
    bubble(Arr, 8);
	return 0;
}
