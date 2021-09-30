#include <bits/stdc++.h>
using namespace std;
pair<int,int> minmax(vector<int>v){
    int n=v.size();
    int maxi,mini;
    int strt;
    if(n%2!=0){
        maxi=v[0];
        mini=v[0];
        strt=1;
    }
    else{
        if(v[0]>v[1]){
            maxi=v[0];
            mini=v[1];
        }
        else{
             mini=v[0];
            maxi=v[1];
        }
        strt=2;
    }
    while(strt<n-1){
        if(v[strt]>v[strt+1]){
            maxi=max(v[strt],maxi);
            mini=min(mini,v[strt+1]);
        }
        else{
            maxi=max(v[strt+1],maxi);
            mini=min(mini,v[strt]);

        }
        strt+=1;

    }
    return {maxi,mini};

}
int main() {
    vector<int>v={1,-2,300,4};
    pair<int,int>ans;
    ans=minmax(v);
    cout<<ans.first<<" "<<ans.second;
}
