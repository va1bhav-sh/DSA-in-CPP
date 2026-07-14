// Aggressive cows problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int c, int minAllowedDistance)//o(n)
{
    int cows = 1;
    int lastPos = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - lastPos >= minAllowedDistance)
        {
            cows++;
            lastPos = stalls[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int n, int c )/// O(n * log(range))
{
    sort(stalls.begin(), stalls.end());// O(n log n)
    int st = 1;
    int end = stalls[n - 1] - stalls[0]; // Without sorting, stalls[i] - lastPos does not represent the distance to the next stall in order, so the greedy placement logic breaks.
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(stalls, n, c, mid))
        {
            ans = mid;
            st = mid + 1;//right 
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n=5,c=3;
    vector<int> stalls={1,2,8,4,9};
    cout<<aggressiveCows(stalls,n,c) << endl;
    return 0;
}