/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
*/

class Solution {
public:
int findPivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }
    if(mid <= e && arr[mid] > arr[mid+1])
      return mid;
    if(mid-1 >= s && arr[mid-1] > arr[mid])
      return mid-1;

    if(arr[s] > arr[mid]) 
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + (e-s)/2;

  }
  return -1;
}

int binarySearch(vector<int> arr, int s, int e, int target) {
    int mid = s + (e-s)/2;
    while(s <= e) {
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s +(e-s)/2;
    }
    return -1;
}
int search(vector<int>& nums, int target) {

    int pivotIndex = findPivot(nums);
    int ans = 0;
    if(target >= nums[0] && target <= nums[pivotIndex]) {
        ans = binarySearch(nums, 0, pivotIndex, target);

    }
    else {
        ans = binarySearch(nums, pivotIndex+1, nums.size()-1, target);
    }

return ans;    
}
};