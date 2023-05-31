// Write a program to display multiplication of two matrices
// entered by the user.


#include <iostream>
#include <vector>


using namespace std;

int main(){

    int matrixRowLenth,matrixColumnLenth;

    

    cout<<"Enter Lenth of Row and Column"<<endl;
    cin>>matrixRowLenth;
    cin>>matrixColumnLenth;
    vector<vector<int>> matrix(matrixRowLenth,vector<int>(matrixColumnLenth));

    for (int i = 0; i<matrixRowLenth; i++){
        for(int j=0; j<matrixColumnLenth; j++){
            cout << "Enter value at position (" << i << ", " << j+1 << "): ";
            
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<matrixRowLenth; i++){
        for(int j=0; j<matrixColumnLenth; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }





    return 0;
}