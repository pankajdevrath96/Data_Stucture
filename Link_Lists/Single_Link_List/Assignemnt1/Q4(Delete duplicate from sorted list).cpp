//
//  Q4(Delete duplicate from sorted list).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 20/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;

struct node {
    int info;
    node *next;
};

node* removeDuplicates(node* head){
    if(head->next==NULL){
        return head;
    }
    else
        {
        removeDuplicates(head->next);
        node *p=head->next;
        if(head->info==p->info)
            {
            head->next=p->next;     //Removing duplicates
            p->next=NULL;
            delete p;              //Deallocating memory
            }
        }
    return head;
}

int main(){
    node *start,*p,*q,*t;
    int item;
    char ch;
    start=NULL;
    do {
        p=new node;
        cin>>item;
        p->info=item;
        p->next=NULL;
        if (start==NULL) {
            start=p;
            start->next=NULL;
        }
        else {                                      // Insertion in sorted order
            q=start;
            t=start;
            while(q!=NULL && q->info<item){
                t=q;
                q=q->next;
            }
            if(q==start){
                p->next=start;
                start=p;
            }
            if(q==NULL){
                t->next=p;
                
            }
            else
                {
                t->next=p;
                p->next=q;
                }
            
        }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
        
    }while(ch=='y');
    
    cout<<"Entered list"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    start=removeDuplicates(start);
    cout<<endl<<"list after removing duplicte elements"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    
}
