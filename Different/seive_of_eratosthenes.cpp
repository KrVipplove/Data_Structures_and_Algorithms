#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n){
    if(n<=2) return 0;

    vector<int> isPrime(n,true);
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<n; i++){
        if(isPrime[i]){
            for(int j = i*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    return count(isPrime.begin(), isPrime.end(), true);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Total no. of primes between 2 to "<<n<<" is ("<<n<<" excluded): "<<countPrimes(n)<<endl;
    return 0;
}