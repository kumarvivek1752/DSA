// Write a program to display multiplication of two matrices
// entered by the user.


#include <iostream>
#include <vector>


using namespace std;

int main(){

    int matrixRowLenth,matrixColumnLenth,matrix2RowLenth,matrix2ColumnLenth;

    

    cout<<"Enter Lenth of Row and Column of Matrix 1"<<endl;
    cin>>matrixRowLenth>>matrixColumnLenth;
    vector<vector<int>> matrix(matrixRowLenth,vector<int>(matrixColumnLenth));
    cout<<"Enter Lenth of Row and Column of Matrix 2"<<endl;
    cin>>matrix2RowLenth>>matrix2ColumnLenth;
     vector<vector<int>> matrix2(matrix2RowLenth,vector<int>(matrix2ColumnLenth));

     vector<vector<int>>matrix3(matrixRowLenth,vector<int>(matrix2ColumnLenth));

    cout<<"enter matrix 1 values:" <<endl;
    for (int i = 0; i<matrixRowLenth; i++){
        for(int j=0; j<matrixColumnLenth; j++){
            cout << "Enter value at position (" << i << ", " << j+1 << "): ";
            
            cin>>matrix[i][j];
        }
    }
    cout<<"enter matrix 2 values:" <<endl;
    
    for (int i = 0; i<matrixRowLenth; i++){
        for(int j=0; j<matrixColumnLenth; j++){
            cout << "Enter value at position (" << i << ", " << j+1 << "): ";
            
            cin>>matrix2[i][j];
        }
    }
   cout << "Your Matrix 1" <<endl;
    for(int i=0; i<matrixRowLenth; i++){
        for(int j=0; j<matrixColumnLenth; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    cout << "Your Matrix 2" <<endl;
    for(int i=0; i<matrixRowLenth; i++){
    for(int j=0; j<matrixColumnLenth; j++){
        cout<<matrix2[i][j];
    }
    cout<<endl;
}

    cout << "tring to multiply...." <<endl;
    if (matrixColumnLenth == matrix2RowLenth){

    for(int i=0; i<matrixRowLenth; i++){
        for(int j=0; j<matrix2ColumnLenth; j++){
            matrix3[i][j] = matrix[j][i]*matrix2[i][j];
        }
    }



    cout << "Your Multiplied Matrix" <<endl;
    for(int i=0; i<matrixRowLenth; i++){
    for(int j=0; j<matrix2ColumnLenth; j++){
        cout<<matrix3[i][j];
    }
    cout<<endl;
    }

    }else{
        cout<<"Your matrix is Not multiplicable"<<endl;
    }
    






    return 0;
}