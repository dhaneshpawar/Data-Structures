#include <iostream>
using namespace std;

void printarr(int arr[]){
    cout << "\n -------------------------------------- \n";
    for(int i = 0; i < 10;i++){
        cout << arr[i] << " ";
    }
    cout << "\n -------------------------------------- \n";
}

int main(){
    int arr[] = {8,6,7,5,9,4,0,3,1,2};
    int total = 0;
    // int arr[] = {5,6,4,7,3,8,2,9,1,0};
    printarr(arr);

    for(int i=0;i<10;i++){
        int minindex = i;
        for(int j=i+1;j<10;j++){
           if(arr[j] < arr[minindex]){
               minindex = j;
           } 
           total++;
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
        cout << "\n iteration = " << i;
        printarr(arr);
    }
    printarr(arr);
    cout << "\n total passes = " << total << "\n"; 
}