#include <iostream>
using namespace std;

void printarr(int arr[]){
    cout<<"\n ----------------------------------- \n";
    cout << "  ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout<<"\n ----------------------------------- \n";
}

int main(){
    int total = 0;
    int arr[] = {8,6,7,5,9,4,0,3,1,2};
    printarr(arr);

    for(int i=1;i<10;i++){
        int temp = arr[i];
        int key = i;
        while(key > 0 && arr[key-1] > temp){
            arr[key] = arr[key-1];
            key = key - 1;
            total++;
        }
        arr[key] = temp;
    }
    printarr(arr);
    cout << "\n total passes = " << total << "\n"; 
}