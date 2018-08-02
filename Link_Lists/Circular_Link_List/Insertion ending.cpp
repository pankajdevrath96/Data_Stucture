
//
//  Insertion ending.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 31/07/18.
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
    char ch;
    int item;
    do{
        
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if(start==NULL){
            start=p;
            p->next=start;
           
        }
        else{
            q=start;
            while (q->next!=start) {
                q=q->next;
            }
            q->next=p;
            p->next=start;
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
    
}

