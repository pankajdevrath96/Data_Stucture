//
//  Deletion begining.c
//  Link_Lists
//
//  Created by Pankaj Devrath on 30/07/18.
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
    cout<<"List before Deletion"<<endl;
    p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<endl<<"List after Deletion"<<endl;
    if(start==NULL){
        cout<<endl<<"List is empty,Deletion not possible..!!"<<endl;
    }
    else if(start->next==NULL){
        p=start;
        start=NULL;
        delete p;
        cout<<endl<<"List is empty now..!!"<<endl;
    }
    else{
        
        p=start;
        start=start->next;
        p->next=NULL;
        start->pre=NULL;
        delete p;
            p=start;
            while (p!=NULL) {
                cout<<p->info<<" ";
                p=p->next;
            }
    }
    
}


