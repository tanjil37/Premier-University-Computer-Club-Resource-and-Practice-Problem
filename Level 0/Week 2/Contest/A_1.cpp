//Bismillahir Rahmanir Rahim
/*

string author;
author = Tanjilul_Islam;

*/
#include<bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)




int main()
{
    Boost;
    int r,g,b;
    string c;
    cin>>r>>g>>b;
    cin>>c;

    if(c=="red"){
       int f = min(g,b);
         cout<<f<<endl;

    }else if(c=="green"){
        int s = min(r,b);
        cout<<s<<endl;  
    }
    else{
        int th = min(r,g);
        cout<<th<<endl;
    }


    return 0;

}