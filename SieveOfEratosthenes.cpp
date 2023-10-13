#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

bool solve(bool prime[]){

    //Every number true;
    for(int i = 0; i <= 100000; i++){

        prime[i] = 1;

    }

    for(int i = 2; i <= 100000; i++){

        // marking non prime;
        if(prime[i]){
            for(int j = (2 * i); j<= 100000; j = j + i){

                prime[j] = 0;

            }

        }

    }

    prime[0] = prime[1] = 0;

}


int main(){

    bool prime[1000001];
    solve(prime);

    int n;
    cin >> n;

        if(prime[n]) {

            cout << "Prime Number" << endl;
        }
        else{

            cout << " Not a Prime Number" << endl;
        }
        
    return 0;
}
