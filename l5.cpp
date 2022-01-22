#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        // 2-d vector, [i][j] indicate if string[i] to string[j] is palindromic
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length(), false));
        for (int i = 0; i < s.length(); i++){
            for (int j = i; j < s.length(); j++){
                if (i == 0){
                    dp[j][j] = true;
                }
                else if(i == 1 && s[i] == s[j]){
                     dp[i][j] = true;
                }
                else if(i > 1 && s[i] == s[j] && ){

                }
            }
            
        }

        for (int)


    }
};

int main (){


}