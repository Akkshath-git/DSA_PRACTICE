class Solution {
public:

    bool canSplit(vector<int>& nums, int k, long long maxSum) {

        int parts = 1;
        long long currentSum = 0;

        for (int num : nums) {

            if (currentSum + num <= maxSum) {
                currentSum += num;
            }
            else {
                parts++;
                currentSum = num;
            }
        }

        return parts <= k;
    }

    int splitArray(vector<int>& nums, int k) {

        long long left = 0;
        long long right = 0;

        // Minimum possible answer = largest element
        // Maximum possible answer = total sum
        for (int num : nums) {
            left = max(left, (long long)num);
            right += num;
        }

        while (left <= right) {

            long long mid = left + (right - left) / 2;

            if (canSplit(nums, k, mid)) {
                // mid is possible
                right = mid - 1;
            }
            else {
                // mid is too small
                left = mid + 1;
            }
        }

        return left;
    }
};