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

<br><br>
 <h2>Quick Sort using divide and conquer method </h2>
 
 Algorithm
 
 <h3>STEP 1. Choosing the pivot </h3>
Choosing the pivot is an essential step. <br>
Depending on the pivot the algorithm may run very fast, or in quadric time.:<br>
1.Some fixed element: e.g. the first, the last, the one in the middle This is a bad choice - the pivot may turn to be the smallest or the largest element, 
then one of the partitions will be empty. <br>
2.Randomly chosen (by random generator ) - still a bad choice. <br>
3.The median of the array (if the array has N numbers, the median is the [N/2] largest number. This is difficult to compute - increases the complexity. <br>
4.The median-of-three choice: take the first, the last and the middle element. <br> 
Choose the median of these three elements. <br>
Example: <br>
8, 3, 25, 6, 10, 17, 1, 2, 18, 5 <br>
The first element is 8, the middle - 10, the last - 5. <br>
The median of [8, 10, 5] is 8 <br>
<h3>STEP 2. Partitioning </h3>
Partitioning is illustrated on the above example. <br>
1. The first action is to get the pivot out of the way - swap it with the last element <br>
      5, 3, 25, 6, 10, 17, 1, 2, 18, 8 <br> <br>
2. We want larger elements to go to the right and smaller elements to go to the left. <br>
      Two "fingers" are used to scan the elements from left to right and from right to left: <br>
<br>
      [5, 3, 25, 6, 10, 17, 1, 2, 18, 8] <br>
       i =5                  ,            j =8   <br>
           * While i is to the left of j, we move i right, skipping all the elements less than the pivot. If an element is found greater then the pivot, i stops <br>
           * While j is to the right of i, we move j left, skipping all the elements greater than the pivot. If an element is found less then the pivot, j stops <br>
           * When both i and j have stopped, the elements are swapped. <br>
           * When i and j have crossed, no swap is performed, scanning stops, and the element pointed to by i is swapped with the pivot. <br>
      In the example the first swapping will be between 25 and 2, the second between 10 and 1. <br><br>
3. Restore the pivot. <br>
    After restoring the pivot we obtain the following partitioning into three groups: <br>
    [5, 3, 2, 6, 1] [ 8 ] [10, 25, 18, 17] <br>
<h3> STEP 3. Recursively quicksort the left and the right parts <h3>
     <h5>Complexities: </h5> <br>
Class                            ->     Sorting Algorithm. <br>
Data Structure                   ->     Array. <br>
Worst case Space Complexity      ->     O(n2) <br>
Best case Time Complexity        ->     O(n*logn) <br>
Average case Time complexity     ->     O(n*logn) <br>
Worst case Time complexity       ->     O(n*logn) <br>

