#include<iostream>
#include<vector>
using namespace std;

int maxAreaBruteForce(vector<int>& nums) {
    int maxArea = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int area = min(nums[i], nums[j]) * (j - i);
            maxArea = max(maxArea, area);
        }
    }
    return maxArea;
}

int maxAreaTwoPointer(vector<int>& nums) {
    int maxArea = 0;
    int start = 0;
    int end = nums.size() -1;
    while(start < end) {
        int width = end - start;
        int height = min(nums[start], nums[end]);
        int area = width * height;
        maxArea = max(maxArea, area);
        if(nums[start] < nums[end]) {
            start++;
        } else {
            end--;
        }
    }
    return maxArea;
}

int main(){
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum area using brute force: " << maxAreaBruteForce(nums) << endl;
    cout << "Maximum area using two pointer approach: " << maxAreaTwoPointer(nums) << endl;
    return 0;
}