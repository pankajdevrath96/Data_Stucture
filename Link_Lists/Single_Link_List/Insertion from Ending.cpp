//
//  Insertion from Ending.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 13/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;
};

//void swap(node **head){
//
//  if((*head)==NULL|| (*head)->next==NULL)
//      return;
//    node *pre=(*head);
//    node *curr=(*head)->next;
//    (*head)=curr;
//    while (true) {
//        node *next=curr->next;
//        if(next==NULL || next->next==NULL){
//            pre->next=next;
//            break;
//        }
//        pre->next=next->next;
//        pre=next;
//        curr=pre->next;
//    }
//}

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
    
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    
    cout<<endl;
//    swap(&start);
//    p=start;
//    while(p!=NULL)
//        {
//        cout<<p->info<<" ";
//        p=p->next;
//        }
}
