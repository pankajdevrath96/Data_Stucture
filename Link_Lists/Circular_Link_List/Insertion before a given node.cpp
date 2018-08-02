
//
//  Insertion before a given node.cpp
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
    
    node *t=new node();
    cout<<"Enter the item you want to insert"<<endl;
    cin>>t->info;
    cout<<endl<<"Enter the element before you want to insert element"<<endl;
    cin>>item;
    p=start;
    q=start;
    if(p->info==item){
        while (q->next!=start) {
            q=q->next;
        }
        q->next=t;
        t->next=start;
        start=t;
        
        
    }
    
    else{
        p=p->next;
    while ( p!=start && p->info!=item ) {
        q=p;
        p=p->next;
    }
        if(p->info!=item){
            cout<<"Elemeent not found"<<endl;
        }
        else{
            q->next=t;
            t->next=p;
        }
   }
    
    p=start;
    while (p->next!=start) {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<p->info<<endl;
    
}
