### Brute Force

Time Complexity: O(n^3)

Explanation: We create a triple for loop that will check every subset of strings. Using this approach, we end up checking certain substrings more than once, particularly the middle substrings. The first for loop marks the start of the string subset. The second for loop changes the end of the substring we are checking. The third for loop checks the palindrome. We keep track of a maxLength and reset the maxLength accordingly. Each time we reset the maxLength, we also reset the starting index. At the end of the function, we return a substring of the original string using the starting index and the maxLength.

## DP

Time Complexity: O(n^2)

Explanation: Define recurrence relation dp(i,j) as having a palindromic sequence. We can think of the 2D array as being 2 pointers where i is the beginning and j is the end. We can add to a palindromic sequence by adding two of the same characters to the outside of a palindrome. Therefore, if the 2 pointers, i and j are the same character and the inside of the sequence is a palindrome, then there is a palindrome. Then we define the recurrence relation:
``` 
Base Cases {
    length 1: dp[i][i] = true, 
    length 2: dp[i][i+1] = (s[i] == s[j])
}
```

```
Recurrence Equation: 
if (s[i] == s[j])  
    dp(i, j) = dp(i + 1, j - 1) 
```
Notice that dp(i + 1, j - 1) is equivalent to checking the inside sequence of a palindrome. Everytime a dp[i][j] is true, we want to update the longest palindromic sequence by taking the size of the interval. 

In the code we have a third for loop:
```
for(unsigned k = 2; k < n; k++) {
    for(unsigned i = 0; i < n - k; i++) {
        int j = i + k;
        
        //recurrence relation
    }
}
```
Notice that the variable `k` defines the length of a string. `i` and `j` = define the endpoints.
