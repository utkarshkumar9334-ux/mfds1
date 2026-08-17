#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"enter row of matrix  :";
    cin>>r1;
    cout<<"enter column of matrix :";
    cin>>c1;
    cout<<"enter element of matrix 1 :";
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter element of matrix 2 :";
    int brr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>brr[i][j];
        }
    }
    int sum[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
