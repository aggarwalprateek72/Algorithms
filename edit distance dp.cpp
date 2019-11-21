#include <bits/stdc++.h>
using namespace std;

int min(int x, int y, int z){
    return min(x, min(y,z));
}

int editdistance(string s1, string s2, int n, int m){
    if(n==0){
        return m;
    }
    if(m==0)
        return n;
    
    if(s1[n-1]==s2[m-1]){
        return editdistance(s1, s2, n-1, m-1);

    }

    return 1+ min(editdistance(s1, s2, n,m-1), editdistance(s1, s2, n-1,m), editdistance(s1,s2, n-1,m-1));
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    int n= s1.length();
    int m= s2.length();
    cout<<editdistance(s1,s2,n,m)<<endl;
    return 0;
}
