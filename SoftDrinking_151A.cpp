#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int toast=drink/nl;
    int limes=c*d;
    int salt=p/np;
    int ans=min({toast,limes,salt});
    int fans=ans/n;
    cout<<fans<<endl;
    return 0;
}