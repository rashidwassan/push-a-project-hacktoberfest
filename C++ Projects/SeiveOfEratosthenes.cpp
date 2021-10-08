/*
Given a number N, find all the prime numbers less than or equal to N
Algorithm - Seive of Eratosthenes
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout <<"Enter number till which prime numbers are to be generated: ";
    cin >> n;
    bool isPrime[n+1]; // boolean array to store whether the number is prime or not
    memset(isPrime, true, sizeof(isPrime)); //Initialize the boolean array to true, denoting all are prime so far
    isPrime[0] = false; //since 0 is not prime
    isPrime[1] = false; //since 1 is not prime

    int i, j;
    //Seive step
    for(i=2; i * i <= n ; ++i){
        // Check if the number i is prime then mark all its multiples as non prime
        if(isPrime[i]) {
            for(j =i*i; j <=n; j+=i )
                isPrime[j] = false;
        }
    }

    // All the numbers with isPrime[i]= true are prime
    for(i=2; i<= n; ++i){
        if(isPrime[i]) {
            cout << i<<endl;
        }
    }
    return 0;
}
