#include <iostream>
using namespace std;
#include <cctype>

bool isPalindrome(string s)
{
    int st = 0;
    int end = s.length() - 1;

    while (st < end)
    {

        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }

        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
            return false;

        st++;
        end--;
    }

    return true;
}

int main()
{
    cout << boolalpha << isPalindrome("A3?3a");
    return 0;
}