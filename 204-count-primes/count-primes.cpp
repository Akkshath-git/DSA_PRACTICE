class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<bool> prime(n, true);

        prime[0] = false;
        prime[1] = false;

        // 2 is the only even prime
        int count = 1;

        // Only check odd numbers
        for (int i = 3; i < n; i += 2) {
            if (prime[i]) {
                count++;

                // Mark multiples of i
                if (1LL * i * i < n) {
                    for (long long j = 1LL * i * i; j < n; j += 2LL * i) {
                        prime[j] = false;
                    }
                }
            }
        }

        return count;
    }
};