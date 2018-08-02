//
//  Common point of two link lists.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 24/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;

struct node{
    int info;
    node *next;
};

node* findIntersection(node *list1,node *list2)
{
    node *q=NULL;
    if(list1!=NULL && list2!=NULL)
        {
        findIntersection(list1->next, list2->next);
        if((list1->info)==(list2->info))
            {
            q=list1;
            }
        }
    return q;
}
void insertNode(node **start)
{
    node *p;
    int item;
    char ch;
    *start=NULL;
    do {
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if ((*start)==NULL) {
            (*start)=p;
            (*start)->next=NULL;
        }
        else
            {                                      // Insertion in begining
                p->next=*start;
                *start=p;
                
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
        
    }while(ch=='y');
    
}
int main()
{
   
    node *FirstNode=NULL,*SecondNode=NULL,*FinalNode=NULL,*p;
    cout<<"Enter the elements of the first list :"<<endl;
    insertNode(&FirstNode);
    cout<<"Enter the elements of the second list :"<<endl;
    insertNode(&SecondNode);
    FinalNode=findIntersection(FirstNode, SecondNode);
    p=FinalNode;
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
    }
    
    
    
}

