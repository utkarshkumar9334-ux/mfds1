#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row of matrix";
    cin>>n;
    int m;
    cout<<"enter column of matrix";
    cin>>m;

    int arr[n][m];
    cout<<"enter element of matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int transpose;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose=arr[j][i];
            cout<<transpose<<" ";
        }
        cout<<endl;
    }

}