// leetcode problem number 1281 : Subtract the Product and Sum of Digits of an Integer
// solution 
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        
        while (n!=0){
            int digit = n%10;
             prod= prod * digit;
            sum = sum + digit;
            n= n/10;
            
        }
        int answer = prod - sum ;
        return answer;
    }
};

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
// Example 1:

// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15