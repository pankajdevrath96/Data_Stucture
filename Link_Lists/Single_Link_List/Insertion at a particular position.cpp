//
//  Insertion at a particular position.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 18/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;
};
node Insertion(node *head,int pos)
{
    node *p,*q;
    p=head;
    int i=1;
    node *n=new node();
    cout<<"ente the value of element"<<endl;
    cin>>n->info;
    while (p!=NULL&&i!=pos) {
        q=p;
        p=p->next;
        i++;
    }
    if(p==head)
        {
        
        }
    if(p==NULL)
        {
        
        }
    else
        {
        
        }
    
    
    
    return *head;
}
int main(){
    node *start,*p,*q;
    int i;
    char ch;
    start=NULL;
    do{
        p=new node();
        cin>>i;
        p->info=i;
        if(start==NULL)
            {
            start=p;
            }
        else
            {
            q=start;
            while(q->next!=NULL)
                {
                q=q->next;
                }
            q->next=p;
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
    cout<<"List before entering the element"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<"Enter the position at which ypu want to eneter the Element"<<endl;
    cin>>i;
    Insertion(start,i);
    
    
}
