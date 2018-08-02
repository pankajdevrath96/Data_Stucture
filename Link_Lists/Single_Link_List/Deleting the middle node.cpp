//
//  Deleting the middle node.cpp
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

node Delete(node *head)
{
    node *p,*q;
    p=head;
    int count=0;
    while(p!=NULL)
        {
        p=p->next;
        count++;
        }
    count=count/2;
    p=head;
    q=head;
    while(count--)
        {
        q=p;
        p=p->next;
        }
        q->next=p->next;
        p->next=NULL;
        delete p;
    return *head;
}
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
    Delete(start);
    p=start;
    cout<<"List after deleting the element"<<endl;
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
    }
    
    
    
    
}
