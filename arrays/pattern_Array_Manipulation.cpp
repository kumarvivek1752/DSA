/*
Q.1 Find the unique number in a given Array where all the elements are being repeated twice with 
one value being unique.

*/

#include<stdio.h>
#include <iostream>


using namespace std;

int main (){

    int array[]={2,3,1,3,2,4,4,9,9,7,1};

    int size = sizeof(array) / sizeof(int);

    cout<<"The size of Array is : " << size << endl;

    for (int i=0; i<size; i++){

        for (int j=i+1; j<size; j++){
            if (array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }

    for(int i=0; i<size; i++){
        if(array[i] >0){
            cout<<"The Unique Value in Array is : "<<array[i]<<endl;
        }
    }


    return 0;
}
