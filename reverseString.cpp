/*
Problem Summary:

Write a function that reverses a string. The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

You may assume all the characters consist of printable ascii characters.
*/


//Solution:

class Solution {
public:
    void reverseString(vector<char>& s) {
        int first = 0;
        int last = s.size() - 1;
        while(first < last)
        {
            char tmp = s[first];
            s[first++] = s[last];
            s[last--] = tmp;
        }
    }
};


/*
Explaination:

Use a 'two pointer' approach to continue swapping the first/last characters until the pointers intersect

*/
