#include <iostream>
using namespace std;
bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0}; // This creates 26 boxes
    // Count characters of s1
    for (int i = 0; i < s1.length(); i++)
    {
        int indx = s1[i] - 'a';
        freq[indx]++;
    }
    int windSize = s1.length(); // Because s1 has 2 characters, so we need to check 2 characters at a time in s2

    for (int i = 0; i < s2.length(); i++)
    {                    // This moves through s2 one position at a time.
        int windIdx = 0; // how many characters we have added to the window
        int idx = i;     // position in s2 where we start.
        int windFreq[26] = {0};
        while (windIdx < windSize && idx < s2.length())
        {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if (isFreqSame(freq, windFreq))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cout<< checkInclusion("ab","eidbaooo");
    return 0;
}