// find the total number of pairs in the Array whose sum is equal to the given value x

 #include <iostream>
 using namespace std; 

 int main()
 {
    int array[]= {3,4,6,7,1,2,2};
    int targetsum = 7;

    int size = 7;
    int pairs = 0;

    for (int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (array[i]+ array[j] == targetsum){
                pairs+=1;   
            }
        }
    }
    cout<<"No of pairs: "<<pairs<< endl;



    // count the number of triplets whose sum is equal to the given value of X.
    int targetsumTriplets= 10;
    int triplets = 0;
    

    for(int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            for (int k=j+1; k<size; k++){
                if (array[i]+ array[j] +array[k] == targetsumTriplets){
                    triplets++;
                }
            }
        }
    }

    cout << "No of Triplets : "<< triplets<< endl;




    return 0;
 }