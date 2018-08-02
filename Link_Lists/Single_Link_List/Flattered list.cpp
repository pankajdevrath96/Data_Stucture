//
//  Flattered list.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 31/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
struct node {
    int info;
    node *next;
};
struct node1{
    int info;
    node1 *next;
    node *down;
};
node * insertionBegining(){
    node *head=NULL,*p;
    
    int item;
    char ch;
    do {
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if (head==NULL) {
            head=p;
            head->next=NULL;
        }
        else
            {                                      // Insertion in begining
                p->next=head;
                head=p;
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
    return head;
}
void display(node * head){
    while(head!=NULL){
        cout<<head->info<<" ";
        head=head->next;
    }
}

int main(){
    
    node1 *start=NULL,*p,*q;
    char ch;
    int item;
    do{
        p=new node1();
        cin>>item;
        p->info=item;
        p->next=NULL;
        p->down=NULL;
        if(start==NULL){
            start=p;
            p->down=insertionBegining();
        }
        else{
            p->next=start;
            p->down=insertionBegining();
            start=p;
        }
        cout<<"Press y"<<endl;
        cin>>ch;
    }while(ch=='y');
    
    p=start;
    while (p!=NULL) {
        cout<<p->info<<endl;
        display(p->down);
        cout<<endl;
        p=p->next;
    }
    
    
}
