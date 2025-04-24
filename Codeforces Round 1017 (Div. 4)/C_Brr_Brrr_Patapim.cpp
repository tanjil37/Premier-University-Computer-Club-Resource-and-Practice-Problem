#include <bits/stdc++.h>
using namespace std;
const int N=100000;
vector<int> d[N+1];
int lb(const vector<int>& a, int x){
    int l=0, r=a.size();
    while(l<r){
        int m=(l+r)>>1;
        if(a[m]<x) l=m+1; else r=m;
    }
    return l;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i=1;i<=N;i++){
        for (int j=1;j*j<=i;j++){
            if(i%j==0){
                if(j>1) d[i].push_back(j);
                int k=i/j;
                if(k!=j && k>1) d[i].push_back(k);
            }
        }
    }
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        vector<int> a(n+1);
        vector<vector<int>> p(N+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            p[a[i]].push_back(i);
        }
        for(int i=1;i<=N;i++){
            if(!p[i].empty()) sort(p[i].begin(), p[i].end());
        }
        while(q--){
            int k,l,r;cin>>k>>l>>r;
            long long s=0;
            while(l<=r){
                if(k==1){ s+=(long long)(r-l+1); break; }
                int m = r+1;
                const vector<int>& v = d[k];
                int sz = v.size();
                for (int i=0;i<sz;i++){
                    int x = v[i];
                    if(x>N) continue;
                    const vector<int>& z = p[x];
                    if(z.empty()) continue;
                    int lo = lb(z,l);
                    if(lo<(int)z.size() && z[lo]<=r){
                        if(z[lo]<m) m=z[lo];
                    }
                }
                if(m==r+1){ s += (long long)(r-l+1)*k; break; }
                s += (long long)(m-l)*k;
                int x = a[m];
                while(k % x==0) k /= x;
                s += k;
                l = m+1;
            }
            cout<<s<<"\n";
        }
    }
    return 0;
}