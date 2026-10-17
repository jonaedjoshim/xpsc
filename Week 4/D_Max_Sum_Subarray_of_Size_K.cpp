#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(vector<int> &arr, int k)
    {
        int n = arr.size();

        long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        long long ans = sum;

        for (int i = k; i < n; i++)
        {
            sum += arr[i] - arr[i - k];

            if (sum > ans)
            {
                ans = sum;
            }
        }

        return ans;
    }
};