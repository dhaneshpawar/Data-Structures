#include <iostream>
using namespace std;
int main() {
   int arr[10] = {10,41,32,63,74,25,56,72,98,19};
   int n=10;

   for(int i=0; i<n;i++){cout << arr[i] << " ";}

   for(int i =0; i< n;i++){
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j] > arr[j+1])
           {
               int tmp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = tmp;
           }
       }
    }

   cout << "\n";
   for(int i=0; i<n;i++){cout << arr[i] << " ";}
    cout<<"\n";   
    return 0;
}