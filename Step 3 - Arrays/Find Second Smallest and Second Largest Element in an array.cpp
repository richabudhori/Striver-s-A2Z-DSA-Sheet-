#include<iostream>
#include<climits> // For INT_MAX and INT_MIN
using namespace std;

// Function to find second smallest
int secSmallest(int arr[], int size){
    int small = INT_MAX;
    int sec_small = INT_MAX;
    
    for(int i = 0; i < size; i++){
        if(arr[i] < small){
            sec_small = small;
            small = arr[i];
        }
        else if(arr[i] < sec_small && arr[i] != small){
            sec_small = arr[i];
        }
    }
    return sec_small;
}

// Function to find second largest
int secLargest(int arr[], int size){
    int large = INT_MIN;
    int sec_large = INT_MIN;
    
    for(int i = 0; i < size; i++){
        if(arr[i] > large){
            sec_large = large;
            large = arr[i];
        }
        else if(arr[i] > sec_large && arr[i] != large){
            sec_large = arr[i];
        }
    }
    return sec_large;
}

int main(){
    int size;
    cout << "ENTER SIZE: ";
    cin >> size;
    
    if(size < 2){
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[size];
    cout << "ENTER ELEMENTS: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int second_smallest = secSmallest(arr, size);
    int second_largest = secLargest(arr, size);

    cout << "Second Smallest: " << second_smallest << endl;
    cout << "Second Largest: " << second_largest << endl;

    return 0;
}
