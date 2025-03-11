#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    
    int y = int(x);
    if(x-y>0)
    {
        cout<<"float "<<y<<" "<<x-y<<endl;
    }
    else
    {
        cout<<"int "<<y<<endl;
    }
    return 0;
}