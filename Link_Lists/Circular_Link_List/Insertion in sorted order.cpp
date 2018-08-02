//
//  Insertion in sorted order.cpp
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
    
    node *start=NULL,*p,*q,*t;
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
            q=p;
        }
        else{
            
            q=start;
            while(q->next!=start && q->info<item){
                q=q->next;
            }
            if(q==start && q->next!=start){
                t=start;
                while (t->next!=start) {
                    t=t->next;
                }
                t->next=p;
                p->next=start;
                start=p;
            }
            else if(q->next==start){
                
                if(q->info>item){
                    t=start;
                    while (t->next!=q) {
                        t=t->next;
                    }
                    t->next=p;
                    p->next=q;
                    
                }
                else{
                    
                    q->next=p;
                    p->next=start;
                    
                }
            }
            else{
                t=start;
                t=start;
                while (t->next!=q) {
                    t=t->next;
                }
                t->next=p;
                p->next=q;
                
            }
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
