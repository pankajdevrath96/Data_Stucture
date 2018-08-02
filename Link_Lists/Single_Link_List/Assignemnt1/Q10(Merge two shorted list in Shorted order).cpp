//
//  Q10(Merge two shorted list in Shorted order).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 21/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;

struct node{
    int info;
    node *next;
};
node* insertShortedOrder()
{
    node *start,*p,*q,*t;
    int item;
    char ch;
    start=NULL;
    do {
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if (start==NULL) {
            start=p;
            start->next=NULL;
        }
        else
            {                                      // Insertion in sorted order
            q=start;
            t=start;
            while(q!=NULL && q->info<item)
                {
                t=q;
                q=q->next;
                }
            if(q==start){
                
                p->next=start;
                start=p;
                }
            if(q==NULL)
                {
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

    return start;
}
node* mergeList( node *FirstNode, node *SecondNode)
{
    
//    if(FirstNode==NULL)
//        {
//        return SecondNode;
//        }
//    if(SecondNode==NULL)
//        {
//        return FirstNode;
//        }
//
//    if(FirstNode->info>SecondNode->info)
//        {
//        return mergeList(FirstNode, SecondNode->next);
//        }
//    else
//        {
//        return  mergeList(FirstNode->next, SecondNode);
//        }
//

            
    
    node *FinalNode=NULL,*p,*q,*t,*r;
    p=FirstNode;
    q=SecondNode;
    while(p!=NULL&& q!=NULL)
        {
        r=new node();
        if(p->info<q->info)
            {
            r->info=p->info;
            p=p->next;
            }
        else
            {
            r->info=q->info;
            q=q->next;
            }
        if((FinalNode)==NULL)
            {
            (FinalNode)=r;
            }
        else
            {
            t=(FinalNode);
            while(t->next!=NULL)
                {
                t=t->next;
                }
            t->next=r;
            }
        }
    while (p!=NULL) {
            r=new node();
            r->info=p->info;
            p=p->next;

        if((FinalNode)==NULL)
            {
            (FinalNode)=r;
            }
        else
            {
            t=(FinalNode);
            while(t->next!=NULL)
                {
                t=t->next;
                }
            t->next=r;
        }
    }
    while (q!=NULL) {
        r=new node();
        r->info=q->info;
        q=q->next;

        if((FinalNode)==NULL)
            {
            (FinalNode)=r;
            }
        else
            {
            t=(FinalNode);
            while(t->next!=NULL)
                {
                t=t->next;
                }
            t->next=r;
            }
    }
    return FinalNode;
}
void display(node * start)
{
    node *p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<endl;
}
int main(){
    node *FirstNode=NULL,*SecondNode=NULL,*FinalNode=NULL;
    cout<<"Enter the elements of the first list :"<<endl;
    FirstNode=insertShortedOrder();
    cout<<"Enter the elements of the second list :"<<endl;
    SecondNode=insertShortedOrder();
    FinalNode=mergeList( FirstNode, SecondNode);
    cout<<"Elements of First List-->"<<endl;
    display(FirstNode);
    cout<<"Elements of second List-->"<<endl;
    display(SecondNode);
    cout<<"Elememts of the Final List in sorted order-->"<<endl;
    display(FinalNode);
}
