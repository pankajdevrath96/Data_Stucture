//
//  Q8(Rotate counter-clockwise by k nodes).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 21/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//
#include "iostream"
using namespace std;
struct node{
    char info;
    node*next;
};
void rotateByN(node **head,int n)
{
    node *p,*q;
    int count=n;
    p=*head;
    while(p!=NULL&&count!=0)
        {
        p=p->next;
        count--;
        }
    try {                       // if n is greater then the size or length of the list
        if(count>0)
            throw 2;                // throw Exception
        else
            {
                if(p!=*head && p!=NULL)
                    {
                    q=*head;
                    while(q->next!=p)
                        {
                        q=q->next;
                        }
                    while (p->next!=NULL)
                        {
                        p=p->next;
                        }
                    p->next=*head;
                    *head=q->next;
                    q->next=NULL;
                    }
            }
    } catch (int) {                     // Rethrow to main
        throw ;
    }
}


int main()
{
    node *start,*p;
    char item,ch;
    int n;
    start=NULL;
    do{
        p=new node();
        cin>>item;
        p->info=item;
        
        if(start==NULL)
            {
            start=p;
            start->next=NULL;
            }
        else                                //Insertion Begining
            {
            p->next=start;
            start=p;
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
    cout<<endl<<"Enter the valid index"<<endl;
    cin>>n;
   
    try {
         rotateByN(&start, n);
        cout<<"List after rotation-->"<<endl;
        p=start;
        while(p!=NULL)
                {
                cout<<p->info<<" ";
                p=p->next;
                }
        
    } catch (int) {
        cout<<"Please enter a valid value of n..!!"<<endl;
    }
    
}
