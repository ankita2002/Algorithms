 #include <bits/stdc++.h> 
using namespace std; 

void insertionSort(int arr[], int n) 
{ 
	int i,j,k; 
	for (i=1; i<n; i++) 
	{ 
		k = arr[i]; 
		j = i - 1; 
		while (j>=0 && arr[j]>k) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = k; 
	} 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; i++) 	cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int n;
	printf("Enter total index of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter an array of %d elements:",n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	insertionSort(arr, n); 
	printArray(arr, n); 
	return 0; 
}  
