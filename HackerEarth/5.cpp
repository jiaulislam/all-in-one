#include <bits/stdc++.h>

using namespace std;

vector<int> SeiveOfEratosthenes(int n){
    bool prime[n+1];
    vector<int> primes;
    memset(prime, true, sizeof(prime));
    for (int i = 2; i*i <= n; i++)
    {
        if (prime[i] == true){
            for (int j = i*2; j <= n; j+=i){
                prime[j] = false;
            }
        }
    }
    for (int i = 66; i <= n; i++){
        if (prime[i])
            primes.push_back(i);
    }
    return primes;
}

char SwapLetter(char c, vector<int> &alphabetPrimes){
    int diff = 255;
    int p = alphabetPrimes[0];
    for (int i = 0 ; i < alphabetPrimes.size(); i++){
        if (abs(alphabetPrimes[i]-c)<diff){
            diff = (int) abs(alphabetPrimes[i]-c);
            p = alphabetPrimes[i];
        }
    }
    return (char)p;
}

int main(){
    vector<int> alphabetPrimes = SeiveOfEratosthenes(120);
    int n;
    cin >> n;
    while(n--){
        int n;
        cin >> n;
        string base_string;
        cin >> base_string;
        string out_string = "";
        char c;
        for (int i = 0; i < base_string.length(); i++){
            c = SwapLetter(base_string[i], alphabetPrimes);
            out_string+= c;
        }
        cout << out_string << endl;
    }

    return 0;
}