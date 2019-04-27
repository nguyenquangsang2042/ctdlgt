// sheelsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int arr[30],k,n;
void swap(int& a1, int& b) {
	int t = a1; a1 = b; b = t;
}
void shell_sort(int a[], int n)
{
	int i, j, k, tmp;
	for (i = n / 2; i > 0; i = i / 2)
	{
		for (j = i; j < n; j++)
		{
			for (k = j - i; k >= 0; k = k - i)
			{
				if (arr[k + i] >= arr[k])
					break;
				else
				{
					tmp = arr[k];
					arr[k] = arr[k + i];
					arr[k + i] = tmp;
				}
			}
		}
	}
}


int main()
{	
	
	printf("Enter total no. of elements : ");
	scanf_s("%d", &n);
	printf("\nEnter %d numbers: ", n);

	for (k = 0; k < n; k++)
	{
		scanf_s("%d", &arr[k]);
	}
	shell_sort(arr, n);
	printf("\n Sorted array is: ");
	for (k = 0; k < n; k++)
		printf("%d ", arr[k]);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
