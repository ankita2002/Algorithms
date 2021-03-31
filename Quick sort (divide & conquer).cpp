#include<bits/stdc++.h>
#include<vector>
using namespace std;

int partion(vector<int>& v, int low, int high) {
	int pivot = v[high];
	int i = low-1;
	int j;
	for(j=low; j<=high;j++) {
		if(v[j]<pivot) {
			i++;
			int t = v[i];
			v[i] = v[j];
			v[j]=t;
		}
	}
	int t = v[i+1];
	v[i+1] = v[high];
	v[high] = t;
	return i+1;
}

int quickSort(vector<int>& v, int low, int high) {
	if(low < high) {
		int pi = partion(v, low, high);
		quickSort(v, low, pi-1);
		quickSort(v, pi+1, high);
	}
	return 0;
}

int main() {
	int n,x,i;
	std::cout<<"Length of array "<< std::endl;
	std::cin >> n;
	vector<int>v;
	std::cout<<"Enter Elements "<< std::endl;
	for(i=0; i<n; i++) { 
	    std::cin >> x;
	    v.push_back(x);
	}
	quickSort(v,0,n-1);
	std::cout<<"Sorted Array: "<< std::endl;
	for(i=0;i<n;i++) std::cout<< v[i] << "  ";
	return 0;
}
