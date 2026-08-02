#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void maxSubArray_BruteForce(int arr[], int size) {
    int maxSum = INT_MIN;
    int index = -1;
    for(int start = 0 ; start < size; start++) {
        int currSum = 0;
        for(int end = start; end<size; end++) {
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
            
        }
    }
    cout << "The maximum sum of a contiguous subarray is: " << maxSum << endl;
}

void kadaneAlgorithm(vector<int>& nums) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int val : nums) {
        currSum = currSum + val;
        maxSum = max(maxSum, currSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
 cout << "The maximum sum of a contiguous subarray using Kadane's algorithm is: " << maxSum << endl;
    
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubArray_BruteForce(arr, size);
    kadaneAlgorithm(nums);
    return 0;
}