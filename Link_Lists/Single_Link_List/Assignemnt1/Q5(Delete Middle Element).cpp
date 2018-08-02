//
//  Q5(Delete Middle Element).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 20/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    int info;
    node *next;
};
void  deleteNode(node**start)
{
    node*p,*q;
    int count=0;
    p=*start;
    while(p!=NULL)
        {
        p=p->next;
        count++;
        }
    count=count/2;
    
    p=*start;
    q=*start;
    while(count--)
        {
        q=p;
        p=p->next;
        }
    q->next=p->next;
    p->next=NULL;
    delete p;
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
    
    deleteNode(&start);
    cout<<"List after deletion"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    
}
