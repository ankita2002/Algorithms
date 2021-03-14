# Algorithms
<h2>Insertion Sort : </h2>

Algorithm:

Step 1 − If the element is the first one, it is already sorted. <br>
Step 2 – Move to next element <br>
Step 3 − Compare the current element with all elements in the sorted array <br>
Step 4 – If the element in the sorted array is smaller than the current element, iterate to the next element. Otherwise, shift all the greater element in the array by one position towards the right <br>
Step 5 − Insert the value at the correct position <br>
Step 6 − Repeat until the complete list is sorted <br>

***Time Complexity for the program on Insertion Sort*** <br>
Time Complexity: O(n^2)
<br><br>
<h2>Binary Search using divide and conquer method </h2>

Algorithm:

// input array: a, low: first index of an array, high: last index of an array, x: element to be searched.
binarysearch(int a[], int low, int high, int x) <br>
1. int mid <br>
2. if(low>high)    
     return 0 <br>
3. else	 
     mid=(low+high)/2 <br>
4. if(x==a[mid]) 
       return mid <br>
5. else if(x<a[mid])  
     return binarysearch(a,low,mid-1,x) <br>
6. else 
     return binarysearch(a,mid+1,high,x) <br>
<br><br>
<h2>Merge Sort</h2>

Algorithm

MergeSort(arr[], l,  r) <br>
If r > l <br>
     1. Find the middle point to divide the array into two halves:   <br>
             middle m = l+ (r-l)/2 <br>
     2. Call mergeSort for first half: <br>   
             Call mergeSort(arr, l, m) <br>
     3. Call mergeSort for second half: <br>
             Call mergeSort(arr, m+1, r) <br>
     4. Merge the two halves sorted in step 2 and 3: <br>
             Call merge(arr, l, m, r) <br>
            
<img src ="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png">
