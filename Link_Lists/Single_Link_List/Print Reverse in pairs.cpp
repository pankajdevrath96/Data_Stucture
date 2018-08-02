//
//  Print Reverse in pairs.cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 27/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    int info;
    node*next;
};
void reverse(node *head,int n)
{
    if(n!=0 && head!=NULL){
        reverse(head->next, n-1);
        cout<<head->info<<" ";
    }
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
    cout<<endl<<"Enter the value in which you want to make pairs"<<endl;
    int n;
    cin>>n;
    p=start;
    while (p!=NULL) {
        reverse(p,n);
        int t=n;
        while(t>0 && p!=NULL){
            p=p->next;
            t--;
        }
         t=n;
        while(t>0 && p!=NULL){                  //  if we want to print in alternative print
            cout<<p->info<<" ";
            p=p->next;
            t--;
        }
    }
}

