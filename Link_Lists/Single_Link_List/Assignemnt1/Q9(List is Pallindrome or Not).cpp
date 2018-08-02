//
//  Q9(List is Pallindrome or Not).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 21/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    char info;
    node*next;
};
string isPallindrome(node *start)
{
    node *head=NULL,*p;
    p=start;
    while (p!=NULL) {
        node *q=new node();
        q->info=p->info;
        if(head==NULL)
            {
            head=q;
            head->next=NULL;
            }
        else
            {
            q->next=head;
            head=q;
            }
        p=p->next;
    }
    p=start;
    while(head!=NULL)
        {
        if(head->info!=p->info)
            {
            return "Not Pallindrome";
            }
        p=p->next;
        head=head->next;
    }
    return "Pallindrome";
}
int main()
{
    node *start,*p;
    char item,ch;
    start=NULL;
    do{
        p=new node();
        cin>>item;
        p->info=item;
        
        if(start==NULL)
            {
            start=p;
            start->next=NULL;
            }
        else                                //Insertion Begining
            {
            p->next=start;
            start=p;
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
    
    cout<<endl<<isPallindrome(start)<<endl;
    
}
