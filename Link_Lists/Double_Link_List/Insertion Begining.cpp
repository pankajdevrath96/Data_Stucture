//
//  Insertion Begining.cpp
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
    
    node *start,*p,*t;
    start=NULL;
    int item;
    char ch;
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
        else
            {
            p->next=start;
            start->pre=p;
            start=p;
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





