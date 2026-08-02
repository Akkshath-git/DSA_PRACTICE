#include<iostream>
#include<vector>
using namespace std;

void majorityElement(vector<int> &nums) {
    int count ;
    for(int val : nums) {
        count = 0;
        for (int num : nums) {
        if (num == val) {
            count++;
        }
    } 
    if (count > nums.size() / 2) {
        cout << "The majority element is: " << val << endl;
        return;
        }
    }
}
int mooresAlgo(vector <int> &nums) {
    int freq = 0;
    int ans = 0;
    int n = nums.size();
    
    for(int i=0 ; i<n ; i++) {
        if (freq ==0) {
            ans = nums[i];        }
    if ( ans == nums[i]){
        freq++;
       } else {
        freq --;
       }
    }
    return ans;
}


int main(){
    int nums[] = {2,2,1,1,1};
    int size = sizeof(nums) / sizeof(nums[0]);
    vector<int> numVector(nums, nums + size);
    majorityElement(numVector);
    cout << "The majority element is via Moore's algorithm: " << mooresAlgo(numVector) << endl;
    return 0;
}