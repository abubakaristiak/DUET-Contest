#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t; cin >> t;
    while (t--)
    {
        long long int n; cin>> n;
        vector<long long int> v(n);
        set<long long int> st;
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int flag=0;
        for(int i=0; i<n; i++){
            if(v[i]>i+1){
                flag=1;
                break;;
            }
        }
        if(flag==0){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }       
} 