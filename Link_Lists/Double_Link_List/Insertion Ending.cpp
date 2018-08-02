//
//  Insertion Ending.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 25/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
struct node{
    int info;
    node *pre,*next;
};
int main(){
    node *t,*p,*start;
    char ch;
    start=NULL;
    int item;
    do{
        p=new node();
        p->pre=NULL;
        p->next=NULL;
        cin>>item;
        p->info=item;
        if(start==NULL)
            {
            start=p;
            }
        else{
            t=start;
            while(t->next!=NULL)
                {
                t=t->next;
                }
            t->next=p;
            p->pre=t;
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
    
}
