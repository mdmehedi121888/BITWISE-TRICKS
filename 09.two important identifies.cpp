// if (x==a)then x = b;
// if(x==b) then x = a;

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
 int x;cin>>x;
 int a = 5,b=10;
 x = x^a^b;
 cout<<x<<endl;
}