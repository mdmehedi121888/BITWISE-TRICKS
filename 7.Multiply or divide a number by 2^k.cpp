#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
 int n;cin>>n;
 int x = 3;
 cout<<"multiply" <<" "<<n<<endl;
 while(x){
    n=n<<1;
     cout<<n<<endl;
    --x;
 }
 cout<<"divide"<<" "<<n<<endl;
while(n){
   
    n = n>>1;
     cout<<n<<endl;
}
 
}