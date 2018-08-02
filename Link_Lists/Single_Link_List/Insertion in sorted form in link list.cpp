//
//  Insertion in sorted form in link list.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 16/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    int info;
    struct node *next;
};
int main(){
    node *start,*p,*q,*t;
    int i;
    char ch;
    start=NULL;
    do{
        p=new node();
        cin>>i;
        p->info=i;
        //sorting of link_list
        if(start==NULL)
            start=p;
        else
            {
            q=start;
            while(q!=NULL && q->info<p->info)
                {
                q=q->next;
                }
            if(q==start)                // insertion in begining
                {
                p->next=q;
                start=p;
                }
            else if(q==NULL)            // insertion in ending
                {
                t=start;
                while(t->next!=NULL)
                    {
                    t=t->next;
                    }
                t->next=p;
                }
            else                        // insertion in between anywhere
                {
                t=start;
                while(t->next!=q)
                    {
                    t=t->next;
                    }
                t->next=p;
                p->next=q;
                }
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
//
    // ARRAY INDEX OUT OF BOUND initiated in java
    //flaw of array in c and cpp;
//    int arr[5];
//    arr[6]=5;
//    arr[7]=9;
//
//    cout<<arr[6]<<" "<<arr[7]<<endl;
}
