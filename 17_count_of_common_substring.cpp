#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countCommonSubstrings(string k1, string k2) {
    int m = k1.length();
    int n = k2.length();
    
    // Use a 1D dp array to store the length of the longest common suffix
    vector<int> dp(n + 1, 0);
    
    int count = 0;  // Total count of common substrings

    // Iterate over each character in k1
    for (int i = 1; i <= m; i++) {
        int prev = 0;  // Used to store dp[j-1] from the previous iteration
        for (int j = 1; j <= n; j++) {
            int temp = dp[j];  // Save dp[j] for the next iteration
            
            // If characters match, update dp[j] to 1 + prev (previous diagonal value)
            if (k1[i - 1] == k2[j - 1]) {
                dp[j] = prev + 1;
                count++;  // Increment count for every match
            } else {
                dp[j] = 0;  // No common substring if characters do not match
            }
            
            prev = temp;  // Update prev for the next comparison
        }
    }
    
    return count;
}

int main() {
    string k1, k2;
    cout << "Enter first string (k1): ";
    cin >> k1;
    cout << "Enter second string (k2): ";
    cin >> k2;
    
    int result = countCommonSubstrings(k1, k2);
    cout << "Count of common substrings: " << result << endl;

    return 0;
}
