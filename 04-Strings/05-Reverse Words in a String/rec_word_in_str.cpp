#include <iostream>
#include <algorithm>
using namespace std;

 string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Reverse the whole string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";

            // Take one word
            while (i < n && s[i] != ' ') {
                word = word + s[i];
                i++;
            }

            // Reverse the word
            reverse(word.begin(), word.end());

            // Add word to answer
            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Remove the first extra space
        return ans.substr(1);
    }
int main() {
    string s = "the sky is blue";
    cout<< reverseWords(s);
    return 0;
}