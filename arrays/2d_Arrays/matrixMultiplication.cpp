// Write a program to display multiplication of two matrices
// entered by the user.


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

    int r2,c2;
    cout<<"Enter the size of second matrix"<<endl;
    cin>>r2>>c2;

    int B[r2][c2];
    cout<<"Enter the elements of second matrix"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }


    if(c1!=r2){
        cout<<"Matrix is not multiplicable Invalid input";
        return 0;
    }

    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value = 0;
            for (int k = 0; k < r2; k++)
            {
                value += A[i][k] * B[k][j];
            }   
            C[i][j] = value;
        }
    }
    cout<<"The resultant matrix is"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}