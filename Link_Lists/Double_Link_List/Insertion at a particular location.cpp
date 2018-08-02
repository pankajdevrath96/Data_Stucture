//
//  Insertion at a particular location.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 25/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
struct node{
    int info;
    node *pre,*next;
};

node * insertAtPosition(node *start,int location,int item)
{
    node *head,*p,*q,*t;
    p=start;
    q=start;
    t=new node();
    t->info=item;
    t->pre=NULL;
    t->next=NULL;
    
    while(p!=NULL && --location)
        {
        q=p;
        p=p->next;
        }
    
    if(p==start)
        {
        t->next=start;
        start->pre=t;
        start=t;
        }
    else if(p==NULL)
        {
        q->next=t;
        t->pre=q;
        }
    else
        {
        q->next=t;
        t->pre=q;
        p->pre=t;
        t->next=p;
        }
    return start;
}

int main(){
    
    node *start,*p,*t;
    start=NULL;
    int item;
    char ch;
    do{
        p=new node();
        p->pre=NULL;
        p->next=NULL;
        cin>>item;
        p->info=item;
        if(start==NULL)
            {
            start=p;
            }
        else
            {
            p->next=start;
            start->pre=p;
            start=p;
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
    
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    int loc;
    cout<<endl<<"Enter the location at which you want to insert element"<<endl;
    cin>>loc;
    cout<<"Enter the item you want to insert"<<endl;
    cin>>item;
    start=insertAtPosition(start, loc, item);
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    
}
