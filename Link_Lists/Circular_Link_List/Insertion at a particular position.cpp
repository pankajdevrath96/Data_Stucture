//
//  Insertion at a particular position.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 01/08/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
struct node{
    
    int info;
    node *next;
};
int main(){
    node *start=NULL,*p,*q;
    int item;
    char ch;
    do{
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if(start==NULL){
            start=p;
            p->next=start;
            q=p;
        }
        else{
            q=start;
            while (q->next!=start) {
                q=q->next;
            }
            q->next=p;
            p->next=start;
            start=p;
            
        }
        cout<<"Press y for coninue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
    
    p=start;
    while (p->next!=start) {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info<<endl;
    
    cout<<endl<<"Enter the position you want to insert"<<endl;
    int n;
    cin>>n;
    cout<<"Enter value"<<endl;
    cin>>item;
    node *t=new node();
    t->info=item;
    p=start;
    q=start;
    
    while(n>1){
        n--;
    //    i++;
        q=p;
        p=p->next;
    }
    if(p==start){
        t->next=start;
        q->next=t;
        start=t;
    }
    else if(p->next==start){
        p->next=t;
        t->next=start;
    }
    else {
        q->next=t;
        t->next=p;
    }
    p=start;
    while (p->next!=start) {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info<<endl;
    
}


