#include<bits/stdc++.h>
using namespace std;
int toogleTheKthBit(int n,int k){
    return n^(1<<(k-1));
}
int main(){
    int n,k;cin>>n>>k;
    cout<<n<<" "<<bitset<8>(n)<<endl;
    n = toogleTheKthBit(n,k);
    cout<<n<<" "<<bitset<8>(n);
}
