#include<stdio.h>
int BinarySearch(int arr[],int l,int r,int x)
{
	if(r>=1) {
		int mid = 1 + (r-1)/2;
		if(arr[mid]==x) 
		    return mid;
		if(arr[mid]>x)
		    return BinarySearch(arr,l,mid-1,x);
		return BinarySearch(arr,mid+1,r,x);
	}
	return -1;
}
int main(void) 
{
	int n;
	printf("Enter no of Elements: ");
	scanf("%d",&n);
	printf("Enter Elememts in sorted manner: ");
	int arr[n];
	int x,i;
	for(i=0;i<n;i++) 
	scanf("%d",&arr[i]);
	printf("Enter Elements to be Searched: ");
	scanf("%d",&x);
	int result = BinarySearch(arr,0,n-1,x);
	if(result==-1)
	printf("Element is not present in the Array");
	else 
	printf("Element is present at index %d \n",result);
	return 0;
}
