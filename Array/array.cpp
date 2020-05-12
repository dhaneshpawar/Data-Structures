#include<iostream>
using namespace std;
/*operations on array
1. declare array
2. add element at the start mid end
3. reomve element at  start mid end
4. update elelment at start mid end
*/

class Array{
    public:
    int length;
    int count;
    int *items;

    Array()
    {
        int myarray[2];
        myarray[0] = 2;
        myarray[1] = 5;
        items = myarray;
    }

    public:
    void print(){
        cout << "items = " << *items[0]  << endl;
        cout << endl;
    };
};

int main()
{
Array a;
a.print();
return 0;
}