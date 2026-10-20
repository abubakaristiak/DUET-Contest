#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    long long int sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(i%2==0){
            sum+=v[i];
        }
    }
    cout << sum << endl;
        
} 