#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}



    void reverseArray(int arr[], int size) {
        int start = 0;
        int end = size -1;
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }



    void add(int arr[] , int size , int value) {
        int sum = 0;
        for(int i = 0 ; i<size ; i++ ) {
            sum +=arr[i];
        }
        cout << "Sum: " << sum << endl;
    }
    void subtract(int arr[] , int size , int value) {
        int sum = 0;
        for(int i = 0 ; i<size ; i++ ) {
            sum -=arr[i];
        }
        cout << "Subtraction: " << sum << endl;
    }



    void maxNumber(int arr[] , int size) {
        int max = INT_MIN;
        for(int i = 0 ; i<size ; i++ ) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Maximum number: " << max << endl;
    }
    void minNumber(int arr[] , int size) {
        int min = INT_MAX;
        for(int i = 0 ; i<size ; i++ ) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Minimum number: " << min << endl;
    }



    void swapMinMax(int arr[] , int size) {
        int min = INT_MAX;
        int max = INT_MIN;
        int minIndex = -1;
        int maxIndex = -1;

        for(int i = 0 ; i<size ; i++ ) {
            if(arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
            if(arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }

        if(minIndex != -1 && maxIndex != -1) {
            swap(arr[minIndex], arr[maxIndex]);
        }
    }


    
    void printUnique(int arr1[], int size1){
        for(int i=0 ; i<size1 ; i++) {
            int count = 0;
            for(int j=0 ; j<size1 ; j++ ) {
                if(arr1[i] == arr1[j]) {
                    count++;
                }
            }
            if(count == 1) {
                cout << arr1[i] << " ";
            }
        }
        cout << endl;
    }



    void printIntersection(int arr[] , int size , int arr1[] , int size1) {
        cout << "Intersection: ";
             for ( int i = 0 ; i < size ; i++ ) {
                for ( int j = 0 ; j <size1 ; j++ ) {
                    if (arr[i] == arr1[j]) {
                        cout << arr1[j] << " ";
                        break; // Break to avoid printing duplicates
                    }
                }
             }
        
                }


    void reverseVector(vector<int> &vec) {
        int start = 0;
        int end = vec.size() -1;
        while(start < end) {
            swap(vec[start], vec[end]);
            start++;
            end--;
        }
    }            
            
        
        
    




int main() {
    int arr[] = { 4 ,2 ,7 ,8 ,1, 2 , 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int arr1[] = {1 ,2 , 2, 3, 3, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> vec = {1, 2, 4, 5, 3, 6, 8, 11, 14};
    
    
    cout<<linearSearch(arr, size, target) << endl;

    reverseArray(arr, size);
    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    add(arr, size, 0);
    subtract(arr, size, 0);
    maxNumber(arr, size);
    minNumber(arr, size);

    cout<<"Array before swapping min and max: ";
    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swapMinMax(arr, size);
    cout<<"Array after swapping min and max: ";
    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"Unique elements in the array: ";
    printUnique(arr1, size1);

    cout<<"Intersection of the two arrays: " << endl;
    printIntersection(arr, size, arr1, size1);
    
    cout << endl << "Vector before reversing: ";
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl << "Vector after reversing: ";
    
    reverseVector(vec);
    for(int val : vec) {
        cout  << val << " ";
    }
    cout<<endl;
    return 0;
}


        
    
    
    
