//
//  Deletion of a given element.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 30/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    int info;
    node *pre,*next;
};
void deleteElement(node **head,int item){
    
    node *p=(*head),*q=(*head);
    while (p!=NULL && p->info!=item) {
        q=p;
        p=p->next;
    }
    if((*head)==NULL || p==NULL){
        cout<<"Element not present"<<endl;
    }
    else if(p==(*head) && (*head)->next!=NULL){
        (*head)=(*head)->next;
        p->next=NULL;
        (*head)->pre=NULL;
        delete p;
    }
    else if (p==(*head)&& p->next==NULL){
        (*head)=NULL;
        delete p;
    }
    else if(p->next==NULL){
        q->next=NULL;
        p->pre=NULL;
        delete p;
    }
    else{
        q->next=p->next;
        (p->next)->pre=p->pre;
        p->pre=NULL;
        p->next=NULL;
        delete p;
    }
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
    cout<<"List before Deletion"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<endl<<"Enter element you want to Delete"<<endl;
    cin>>item;
    deleteElement(&start,item);
    cout<<"List after Deletion"<<endl;
    if(start==NULL){
        cout<<"No element Present"<<endl;
    }
    else{
        p=start;
        while (p!=NULL) {
            cout<<p->info<<" ";
            p=p->next;
        }
    }
  
    
}


