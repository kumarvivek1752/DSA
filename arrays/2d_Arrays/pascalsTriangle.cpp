// Given an integer n, 
// return the first n rows of Pascal's Triangle


#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cout << "Enter an Integer : "<<endl;
    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; i++){
        for (int j = 0; j<n; j++){
            v[i][j];
        }
    }

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < n;j++)
            cout << v[i][j] << " ";
    }

        return 0;
}