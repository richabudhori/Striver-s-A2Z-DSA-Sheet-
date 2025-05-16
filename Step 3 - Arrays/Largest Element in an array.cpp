//DID IT WITHOUT USING VECTORS 

#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "ENTER SIZE: "<< endl;
    cin >> size;
    
    int arr[size];
    
    cout << "ENTER ELEMENTS: " <<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    //finding the largest element in the array 
    int max = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "LARGEST ELEMENT IN AN ARRAY: " << max << endl;
    
}
