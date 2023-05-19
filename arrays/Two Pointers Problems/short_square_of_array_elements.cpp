// Given an integer array ‘a’ sorted in non-decreasing
// order, return an array of the squares of each number
// sorted in non-decreasing order.

#include <iostream>
#include <vector>

using namespace std;

void shortedSquaredArray(vector<int> &v){

    vector<int> ans;
    
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }


    for(int i=0; i<v.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return;

}


int main(){

    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    shortedSquaredArray(v);


    return 0;




}