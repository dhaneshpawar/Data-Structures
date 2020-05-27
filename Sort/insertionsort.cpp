#include <iostream>
using namespace std;

void printarr(int arr[]){
    cout<<"\n ----------------------------------- \n";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout<<"\n ----------------------------------- \n";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    printarr(arr);
}