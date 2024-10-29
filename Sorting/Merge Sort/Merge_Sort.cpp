#include<iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(int arr[], int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    
     // Create temp Arrays
    int L[n1], R[n2];

    // Copy data to temp Arrays L[] and R[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left+i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid+1+i];
    }

    int i=0, j=0;
    int k=left;

    // Merge the temp Arrays back 
    // into arr[left..right]
    while (i<n1 && j<n2)
    {
        if(L[i]<=R[j]){
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
        }
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i<n1)
    {
        arr[k++] = L[i++];
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j<n2)
    {
        arr[k++] = R[j++];
    } 
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void merge_sort(int arr[], int left, int right){
    if(left>=right)return;
    int mid = left+ (right-left)/2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid+1, right);
    merge(arr, left, mid, right);
}
int main(){
    int test[] = {56, 3, 1, 78, 34, 2, 8};
    int n = sizeof(test)/sizeof(test[0]);

    merge_sort(test, 0, n-1);

    cout<<"Sorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout<<test[i]<<" ";
    }
    /*Output
    Sorted Array
    1 2 3 8 34 56 78 
    */

    return 0;
}