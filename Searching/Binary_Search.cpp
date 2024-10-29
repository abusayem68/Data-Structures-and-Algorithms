#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>& arr, int target){
    int l =0, r= arr.size()-1;
    int ans =-1;
    while (l<=r)
    {
        int mid = l+ (r-l)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }
        if(target>arr[mid]){
            l = mid+1;
        }
        else r = mid-1;
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 3, 6, 8, 9, 12, 14, 16, 17};
    cout<<binary_search(arr, 88);
    return 0;
}