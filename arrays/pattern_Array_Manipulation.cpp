/*
Q.1 Find the unique number in a given Array where all the elements are being repeated twice with 
one value being unique.

*/

#include<stdio.h>
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int largestElementIndex(int arr[],int size){
    int max=INT_MIN;
    int maxindex= -1;

    for (int i=0 ; i<size;i++){
        if (arr[i]>max){
            max=arr[i];
            maxindex =i;
        }
    }

    return maxindex;
}


int main (){

    int array[]={2,1,5,7};

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

    //Find the secound largest element in the given array.
    int indexLagestEle = largestElementIndex(array,size);
    cout << "The Largest Element is : "<< array[indexLagestEle]<< endl; 
    array[indexLagestEle]=-1;
    int indexSecoundLagestEle = largestElementIndex(array,size);
    cout << "The secound Largest Element is : "<< array[indexSecoundLagestEle]<< endl; 




    return 0;
}
