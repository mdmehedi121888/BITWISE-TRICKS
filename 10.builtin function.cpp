#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
 int x;cin>>x;
 //no of set bits
// for long long  O(log2(n)) complexity
 cout<<__builtin_popcount(x)<<endl;
 cout<<__builtin_popcountll(x)<<endl;
 // on of set bits is even or odd
 cout<<__builtin_parity(x)<<endl;
 // count of leading zeros 
 cout<<__builtin_clz(x)<<endl;
 // count of trailing zeros
 cout<<__builtin_ctz(x)<<endl;
}