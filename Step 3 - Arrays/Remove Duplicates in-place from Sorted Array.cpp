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
    
    //removing duplicates from sorted array 
    int i = 0;
    for(int j=1; j<size; j++){
        if(arr[j] != arr[i]){
            i++;
        }
    }
    [i] == arr[j];

    cout << "NEW ARRAY: " << i+1 << endl;
    
}
