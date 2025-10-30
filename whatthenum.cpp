class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false; // Negative numbers are not palindromes
        }
        int currentNumber = x;
        int reverseNumber = 0;

        while(currentNumber > 0){
            int lastDigit  = currentNumber % 10; // Extract the last digit
            // Check for overflow before multiplying reverseNumber by 10
            if (reverseNumber > INT_MAX / 10) {
                return false; // Prevent overflow, though unlikely for palindromes
            }
            reverseNumber = (reverseNumber * 10) + lastDigit;  // Update reversed number
            currentNumber = currentNumber / 10; // Remove last digit
        }
        return reverseNumber == x; // Compare reversed number with the original
    }
};
