//
//  Q6(Delete Key element last Occurence).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 21/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    int info;
    node *next;
};
void deleteKeyElement(node **start,int n)
{
    node *p,*head,*q;
    head=*start;
    q=*start;
    p=NULL;
    int flag=0;
    
    while(head!=NULL)
        {
        if(head->info==n)                       //check element
            {
            p=head;
            flag=1;
            }
        head=head->next;
        }
    try {
        if(flag==0)
            {
            throw (1);                          // if element not found throw Exception
            }
        else
            {
            if(p==*start)                       // if element is on the 1st node
                {
                *start=p->next;
                p->next=NULL;
                delete p;
               // *start=(*start)->next;
                }
            else
                { q=*start;
            while (q->next!=p)
                {
                q=q->next;                        //delete the node if it is somwehere else
                }
            q->next=p->next;
            p->next=NULL;
            delete p;
                }
            }
    } catch (int) {
        throw ;
    }
}

int main(){
    node *start,*p;
    int item;
    start=NULL;
    char ch;
    do{
        p=new node();
        cin>>item;
        p->info=item;
        if(start==NULL)
            start=p;
        else
            {
            p->next=start;
            start=p;
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');

    cout<<"Entered list"<<endl;
    p=start;
   
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
    }
    int key;
    cout<<"Enter the element you want to delete"<<endl;
    cin>>key;
    try {
        deleteKeyElement(&start,key);
        cout<<"List after deletion-->"<<endl;
        p=start;
        if(p==NULL)
            {
            cout<<"List is empty..!!"<<endl;
            }
        else
            {
        while(p!=NULL)
            {
            cout<<p->info<<" ";
            p=p->next;
            }
            }
    } catch (int) {
        cout<<"Element is not present in the list..!!"<<endl;
    }

}

