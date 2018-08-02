//
//  Deletion of an element in list.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 18/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;

struct node{
    int info;
    node *next;
};
int main(){
    node *start,*p,*q;
    int i;
    start=NULL;
    char ch;
    do{
        p=new node();
        cin>>i;
        p->info=i;
        if(start==NULL)
            {
            start=p;
            p->next=NULL;
            }
        else
            {
            p->next=start;
            start=p;
            
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
        p=start;
    cout<<"List before deleting the element"<<endl;
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl<<"Enter the element you want to delete"<<endl;
    cin>>i;
    p=start;
    q=start;
    while(p!=NULL&&p->info!=i)
        {
        q=p;
        p=p->next;
        }
    //element not found
    if(p==NULL)
        {
        cout<<"Element not found"<<endl;
        
        }
    else
        //element at start pointer (Begining position)
        {
        if(p==start)
            {
            start=p->next;
            p->next=NULL;
            delete p;
            }
        //Element in between or at the end of the list
        else
            {
            q->next=p->next;
            p->next=NULL;
            delete p;
            }
        
        }
    
    
    
    p=start;
    cout<<"List after deleting the element"<<endl;
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
    }
    
        
        
        
}
