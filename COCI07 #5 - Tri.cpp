#include <bits/stdc++.h>

#define pb(x) push_back(x);
#define in(y) insert(y);
#define tt(t) while(t--)
#define itr ::iterator it;
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define si set<int>                      
#define msi map<string, int>
#define new cout<<endl
#define ff(n) for(int i=0;i<n;i++)
#define all(v) sort(v.begin(),v.end())

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // use all operands(5) a   b    c
    if(a+b==c){
    	cout<<a<<"+"<<b<<"="<<c;
    }
    else if(a-b==c){
    	cout<<a<<"-"<<b<<"="<<c;
    }
    else if(a*b==c){
    	cout<<a<<"*"<<b<<"="<<c;
    }
    else if(a/b==c){
    	cout<<a<<"/"<<b<<"="<<c;
    }
    else if(a==b+c){
    	cout<<a<<"="<<b<<"+"<<c;
    }
    else if(a==b-c){
    	cout<<a<<"="<<b<<"-"<<c;
    }
    else if(a==b*c){
    	cout<<a<<"="<<b<<"*"<<c;
    }
    else if(a==b/c){
    	cout<<a<<"="<<b<<"/"<<c;
    }
    
    return 0;
}
