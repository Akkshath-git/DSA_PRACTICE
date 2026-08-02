#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int singleNumber(vector <int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans^ val;      // using bitwise XOR operator
        }                        // n ^ n = 0 and n ^ 0 = n  (logic)
        return ans;              // 1 ^ 1 = 0,    2 ^ 2 = 0,    4 ^ 0 = 4
    }
};
int main() {
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = solution.singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}