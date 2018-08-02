//
//  Reverse a list in a given pair.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 18/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include <iostream>

using namespace std;

struct node{
    int info;
    node *next;
};
node Reverse(node *head,int i)
{
    node *p,*q,*start;
    int count=0;
    p=head;
    start=NULL;

    while(p!=NULL)
        {
        count=0;
        q=p;
        node *t=p;;
        while(count!=i && p!=NULL)
            {
            t=p;
            p=p->next;
            }
        if(p==NULL)
            {
            node *h=NULL;
            while(q!=t)
                {
                
                
                }
            }




        }






    return *start;

}

int main(){
    node *start,*p;
    int i;
    start=NULL;
    char ch;
    do{
        p=new node();
        cin>>i;
        p->info=i;
        if(start==NULL)
            {
            start=p;
            p->next=NULL;
            }
        else
            {
            p->next=start;
            start=p;

            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
    }while(ch=='y');
    p=start;
    cout<<"List before Reversing the element"<<endl;
    while (p!=NULL) {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<"Enter the number you want to pair of elements"<<endl;
    cin>>i;
    Reverse(start,i);
}
