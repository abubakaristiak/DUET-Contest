#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    long long int f0=1, f1=2;
    long long int MOD=1000000007;
    for(int i=2; i<n; i++){
        long long int fibo=(f0+f1)%MOD;
        f0=f1;
        f1=fibo;
    }
    
    cout << f1 << endl;
}