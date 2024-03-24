#include<iostream>
using namespace std;
int n, p, q, s, d,a[100][100], visited[100], shotest_path = 100000;


void dfs(int n, int i, int length){
    int j, s;

    // cout<<i;
    if(i == d){
        // cout<<endl;
        shotest_path = min(shotest_path , length);
        return;
    }

    visited[i] = 1;
    for(j = i; j<n; j++){
        if(!visited[j] && a[i][j] == 1){
            dfs(n, j, length+1);
        }
    }
    visited[i] = 0;
}

int main(){
    int length = 0;
    cin>>n;
    

     for(int i = 0; i<n; i++){
        cin>>p;
        for(int j = 0; j<n; j++){
            cin>>q;
            if(q == -1){
                break;
            }
            a[p][q] = 1;
        }
    }

    cin>>s>>d;
    dfs(n, s, length);
    cout<<shotest_path;


   
}
