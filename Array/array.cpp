#include<iostream>
using namespace std;
/*operations on array
1. declare array
2. add element at the start mid end
3. reomve element at  start mid end
4. update elelment at start mid end
*/

void printarr(int arr[],int n){
        cout << "\n You entered : \n";
        for(int i; i<n; i++){
            cout<< arr[i] << " ";
        } 
}

int main(){
    int ch,n = 5;
    int arr[5];
    
    cout << "\n Enter the Elements : \n";
    
    cout << " \n sieof = " << arr.size();
    
    printarr(arr,n);

    while(ch != 6){

        cout << "\n 1. Add 2. Update 3. Delete 4. Search 5. Display 6. Exit \n";
        cin >> ch;
        switch(ch){
            case 1 :{
                cout << "sieof = " << sizeof(arr)/sizeof(arr[0]);
                cout << "\n n is = "  << n;
                if(sizeof(arr)/sizeof(arr[0]) == n){
                    cout << "\n The Array is already filled \n";
                }
                else{
                    int chForAdd;
                    cout << "\n 1. At Start 2. Ad Mid 3. At End \n";
                    cin >> chForAdd;
                    int newElement;
                    cout << "\n Enter the Element : \n";
                    cin >> newElement;
                    switch(chForAdd){
                        case 1:{
                            for(int i=sizeof(arr)/sizeof(arr[0]); i >= 0;i--){
                                arr[i+1] = arr[i];
                            }
                            arr[0] = newElement;
                            cout << "\n New Element added .... \n";
                        }
                    }
                }
                break;
                }
            case 5:{
                printarr(arr,n);
                break;
            }
            default : cout << "\n Wrong choice \n"; 
        }
    }
    return 0;
}
