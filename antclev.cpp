#include<bits/stdc++.h>
using namespace std;
int memo[100][100], a[100][100];

int topdown(int m, int n){
    if(m < 0 || n < 0){
        return 0;
    }
    else if(memo[m][n] != 0){
        return memo[m][n];
    }
    else{
        return memo[m][n] = max(a[m][n] + topdown(m-1, n), a[m][n] +  topdown(m, n-1));
    }
}

int main(){
    int m, n;
    cin>>m>>n;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<topdown(m, n);
}
