//
//  Middle of a list.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 31/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;
};
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
    cout<<endl<<"Middle element"<<endl;
    if( start!=NULL && start->next!=NULL){
        p=start;
        q=start;
        while(q!=NULL){
            
            q=q->next;
            if(q!=NULL){
                q=q->next;
                p=p->next;
            }
        }
        cout<<p->info<<endl;
        
    }
    else{
        cout<<"NO middle element"<<endl;
    }
    
}
