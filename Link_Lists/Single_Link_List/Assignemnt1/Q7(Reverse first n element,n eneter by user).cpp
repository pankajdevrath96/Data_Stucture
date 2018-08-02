//
//  Q7(Reverse first n element,n eneter by user).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 21/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
using namespace std;
struct node{
    int info;
    node *next;
};

int main(){
    node *start,*p,*head;
    start=NULL;
    char ch;
    do
        {
        p=new node();
        cin>>p->info;
        p->next=NULL;
        if(start==NULL)
            {
            start=p;
            }
        else
            {
            p->next=start;
            start=p;
            }
        
        cout<<"Press y to continue your inswertion"<<endl;
        cin>>ch;
        }while(ch=='y');
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    
    int n;
    cout<<endl<<"Enter the number in ehich you want to make pairs"<<endl;
    cin>>n;
    p=start;
    head=NULL;
    
        int count=0;
        node *q,*start1=NULL;
        while(p!=NULL && count<n)
            {
            count++;
            q=new node();                           //insertion begining
            q->info=p->info;
            
            q->next=start1;
            start1=q;
            p=p->next;
            }
        head=start1;
            q=head;
            while (q->next!=NULL) {
                q=q->next;
            }
            q->next=p;
    
    p=head;
    while (head!=NULL) {
        cout<<head->info<<" ";
        head=head->next;
    }
    
    return 0;
}

