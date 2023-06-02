#include <iostream>


using namespace std;

int main(){

    int r1,c1;
    cout<<"Enter the size of first matrix"<<endl;
    cin>>r1>>c1;

    int A[r1][c1];
    cout<<"Enter the elements of first matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }

    int B[c1][r1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            B[j][i] = A[i][j];
        }
    }

    cout<<"The transpose of the matrix is"<<endl;
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

}