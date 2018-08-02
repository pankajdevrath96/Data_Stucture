//
//  Q2(Adding 1 to last node).cpp
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
node* incrementByOne(node *head)
{
    if(head->next==NULL)
        {
        head->info++;
        return head;
        }
    else
        {
        incrementByOne(head->next);
        if(head->next->info>9)
            {
            head->next->info=0;
            head->info++;
            }
        }
    return head;
}
int main(){
    node *start,*p;
    start=NULL;
    char ch;
    int item;
    do{
        p=new node;
        cin>>item;
        p->info=item;
        if(start==NULL)
            {
            start=p;
            start->next=NULL;
            }
        else
            {                           //Insertion Ending
            node *q;
            q=start;
            while(q->next!=NULL)
                {
                q=q->next;
                }
            q->next=p;
            p->next=NULL;
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
    start=incrementByOne(start);
    if(start->info>9)                   //Insert one node in the begining if the info of start is 10
        {
        p=new node();
        p->info=1;
        start->info=0;
        p->next=start;
        start=p;
        }
    cout<<endl<<"List after Increment by 1"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
}
