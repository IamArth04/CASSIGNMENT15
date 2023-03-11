#include <stdio.h>
void Rotate(int arr[], int d, int n)
{
	int temp[n];
	int k = 0;
	for (int i = d; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < d; i++) {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}
void PrintTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		
        printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = { 32, 29, 40, 12, 70 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;
	Rotate(arr, d, N);
	PrintTheArray(arr, N);

	return 0;
}
