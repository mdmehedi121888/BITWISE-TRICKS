#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
 int x,y;cin>>x>>y;
 x = x^y;
 y = x^y;
 x = x^y;
 cout<<x<<" "<<y<<endl;
}