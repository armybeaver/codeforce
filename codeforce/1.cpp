#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int t; cin>>t;
    int o;

    if (t>=1&&t<=500){
        vector<int> dem(t,0);
        for(o = 0; o <t;o++){
            int n;
            cin>>n;
            if (n>=1&&n<=20){
                vector<int> a(n);
                for (int i = 1 ; i<=n;i++){
                    cin>>a[i];
                }
                for ( int i = 1; i<n;i++){
                    for (int j = i + 1 ; j<=n; j++){
                        if (a[j]==a[i]){
                            dem[o]++;
                        } 
                    }
                }
            }
        }
        for (o = 0; o < t; o++){
            cout<<dem[o]<<endl;
        }  
    } 
    return 0;
}