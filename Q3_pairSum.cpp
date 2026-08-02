#include<iostream>
#include<vector>
using namespace std;
vector <int> pairSum(vector <int>& nums, int target) {
    vector <int> ans;
    int n = nums.size();
    for(int i = 0; i<n ;i++) {
        for(int j = i+1 ; j<n ; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector <int> pairSumOptimized(vector <int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    vector <int> ans;
    while(start < end) {
        int pairSum = nums[start] + nums[end];
        if(pairSum < target) {
            start++;
        } else if(pairSum > target) {
            end--;
        } else {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector <int> nums = {2, 7, 11, 15};
    int target = 9;
    vector <int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    vector <int> ansOptimized = pairSumOptimized(nums, target);
    cout << ansOptimized[0] << " " << ansOptimized[1] << endl;
    return 0;
}