// Command to execute the cpp program
// clear && g++ index.cpp && ./a.out

#include<iostream>
using namespace std;

// literal or constant
// two ways of defining - #define or const where type can be defined
#define length 23;

int main(){
    const int mylen = 20;
    cout << "hello world" << endl;
    typedef int number;
    number i = 5;
    cout << "number i = " << i << endl;
    int k;
    k = 5;
    cout << "number k = " << k << endl;
    cout << length;
    cout << endl;
    cout << mylen;
     // local variable declaration:
   int a = 100;
   int b = 200;
   int ret;
 
   // calling a function to get max value.
   ret = max(a, b);
   cout << "Max value is : " << ret << endl;

    string me = "hello";
    cout << me << endl;
    cout << me.size() << endl;

    for(int i = 0; i < me.size(); i++)
    {
        cout << me[i] << endl;
    }

    cout << endl;
    char name[3];
    cout << "Please enter your name : ";
    cin >> name;
    cout << "Your name is : " << name << endl; 

    return 0;
}

// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}