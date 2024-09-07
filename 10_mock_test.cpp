#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}


long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to calculate the number of ways to distribute M mangoes among P persons
long long countWays(int M, int P) {
    // Calculate the number of ways using binomial coefficient C(M + P - 1, P - 1)
    return binomialCoefficient(M + P - 1, P - 1);
}

int main() {
    int M, P;
    cout << "Enter the number of mangoes: ";
    cin >> M;
    cout << "Enter the number of persons: ";
    cin >> P;
    
    // Calculate and output the number of ways to distribute mangoes
    cout << "Number of ways to distribute " << M << " mangoes among " << P << " persons is: " << countWays(M, P) << endl;
    
    return 0;
}