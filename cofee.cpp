#include <iostream>
using namespace std;
int main() {
    int X,P,sum=0;
    float k;
    cin>>X>>P;
    while(k>0)
    {
        k=(float)P/100*X;        
        sum=sum+X;
        X=X-k;
    }
    cout<<sum<<endl;
}