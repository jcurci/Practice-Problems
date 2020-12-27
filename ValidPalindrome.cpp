/*
Problem:
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

*/

//Solution:
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int left = 0, right = s.size()-1; left<right;left++,right--)
        {
            while(left < right && isalnum(s[left]) == false)
            {
                left++;
            }
            
            while(left < right && isalnum(s[right]) == false)
            {
                right--;
            }
            
            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
        }
        return true;
        
    }
};


/*
Explaination:

Use a "two pointer" approach to continue grabbing valid characters from the left/right of the string.  Compare the characters and return false if they are not equal, since that means it is not a palindrome.

If we get through the whole string without finding 2 unequal characters, then return true since it is a valid palindrome!
*/
