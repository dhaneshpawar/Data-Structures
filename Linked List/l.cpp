#include<iostream>
#include <stdlib.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    int ch = 0;
    Node* head = NULL;
    head = new Node(1);
    Node* head2 = new Node(2);
    Node* head3 = new Node(3);
    Node* head4 = new Node(4);

    head->next = head2;
    head2->next = head3;
    head3->next = head4;

    do{
        cout << "\n--------------------------------------------------------------------";
        cout << "\n 1.Add     2.Update     3.Delete     4.Print     5.Exit";
        cout << "\n--------------------------------------------------------------------";
        cout << "\n Enter Your Choice : ";
        cin  >> ch;
        int data;
        int index;
        
        switch(ch){
            case 1 :{
                        cout << "\n Enter Data : ";
                        cin >> data;

                        cout << "\n Enter Index : ";
                        cin >> index;

                        if(head == NULL){
                            head = new Node(data);
                        }
                        else{
                            int i = 1;
                            
                            Node* temp = new Node(data);
                            Node* n = head;

                            if(index == 1)
                            {
                                temp->next = head;
                                head = temp;
                                cout << "\n Node Added ....";
                            }
                            else{                            
                            while(i < index- 1){
                                if(n->next == NULL)
                                {
                                    cout << "\n Index out bound";
                                    break;
                                }
                                n = n->next;
                                i++;
                            }

                            if(n->next != NULL)
                            {
                                temp->next = n->next;
                                n->next = temp;
                                cout << "\n Node Added ....";
                                break;
                            }
                            else if(n->next == NULL && i == index- 1)
                            {
                                n->next = temp;
                                cout << "\n Node Added ....";
                            }
                        }
                        }
                break;
            }
            
            case 2 :{
                        cout << "\n Enter Data : ";
                        cin >> data;

                        cout << "\n Enter index : ";
                        cin >> index;
                        
                        Node* temp = new Node(data);
                        Node* n = head;

                        if(index == 1){
                            temp->next = head->next;
                            head = temp;
                        }
                        else{
                            
                            int i = 1;
                            
                            while(i < index - 1){
                                if(n->next == NULL){
                                    cout<< "\n Index out of Bound ......";
                                    break;
                                }
                                n = n->next;
                                i++;
                            }
                           
                            if(n->next != NULL){
                                temp->next = n->next->next;
                                n->next = temp;
                                cout << "\n Node Updated ....";
                            }
                        }
                break;
            } 
            
            case 3 :{
                        cout << "\n Enter index : ";
                        cin >> index;
                        
                        Node* n = head;

                        if(index == 1){
                            head = head->next;
                        }
                        else{
                        
                        int i = 1;
                        
                        while(i < index - 1){
                            if(n->next == NULL){
                                cout<< "\n Index out of Bound ......";
                                break;
                           }
                        
                           n = n->next;
                           i++;
                        }
                        
                        if(n->next != NULL){
                            n->next = n->next->next;
                            cout << "\n Node Deleted ....";
                            break;
                        }
                    }
                break; 
            }

            case 4 :{
                        if(head == NULL){
                            cout << "\n Your Linked list is empty...";
                        }
                        else{
                                Node* n = head;while (n != NULL){cout << "+---+   ";n = n->next;}n = head;cout << "\n";

                                while (n->next != NULL){cout << "| " << n->data << " |-->";n = n->next;}cout << "| " << n->data << " |\n";n = head;

                                while (n != NULL){cout << "+---+   ";n = n->next;}
                        }
                        break;  
            }

            case 5 :{
                        cout << "\n\n\n--------------------------------------------------------------------";
                        cout << "\n                   Thanks for visting us .....                   ";
                        cout << "\n--------------------------------------------------------------------\n\n\n";
                        break;  
            }
            default : {cout << "\n wrong choice....";} 
        }
    }while(ch != 5);    
    
    return 0;
}