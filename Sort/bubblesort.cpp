#include <iostream>
using namespace std;
int main() {
    int arr[] = {8,6,7,5,9,4,0,3,1,2};
    int total = 0;
//    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    int arr[10] = {10,41,32,63,74,25,56,72,98,19};
   int n=10;

   for(int i=0; i<n;i++){cout << arr[i] << " ";}

   for(int i =0; i< n;i++){
           int flag = 0;
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j] > arr[j+1])
           {
               int tmp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = tmp;
               flag = 1;
           }
           total++;
       }
       if(flag == 0){
           cout << "this has been breaked";
           break;
       }
    }

   cout << "\n";
   for(int i=0; i<n;i++){cout << arr[i] << " ";}
    cout<<"\n";  

    cout << "\n total passes = " << total << "\n"; 

    return 0;
}