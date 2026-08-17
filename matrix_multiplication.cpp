#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"enter row of matrix 1 :";
    cin>>r1;
    cout<<"enter column of matrix 1 :";
    cin>>c1;
    cout<<"enter element of matrix 1 :";
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    int r2,c2;
    cout<<"enter row of matrix 2:";
    cin>>r2;
    cout<<"enter column of matrix 2:";
    cin>>c2;
    cout<<"enter element of matrix 2:";
    int brr[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }
    int sum=0;
    if(c1!=r2){
        cout<<"matrix multiplication is not possible :";
        return 0;
    }
    else{
        int ans[r1][c2]={0};
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                ans[i][j]=ans[i][j]+arr[i][k]*brr[k][j];
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}

   


}