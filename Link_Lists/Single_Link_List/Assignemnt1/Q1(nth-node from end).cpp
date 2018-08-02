//
//  Q1(nth-node from end).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 20/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
using namespace std;
struct node{
    char info;
    node*next;
};

char elementAtN(node *head,int n)
{
    node *p;
    int count=0;
    p=head;
    while(p!=NULL)
        {
        p=p->next;
        count++;
        }
    
    p=head;
    
    try {                       // if n is greater then the size or length of the list
        if(count<n)
            throw 2;                // throw Exception
        else
            {  count-=n;
        while(count--)
           {
            p=p->next;
           }
                
           return p->info;
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
    try
    {
    cout<<elementAtN(start,n)<<endl;
    }
    catch(int){
        cout<<"Invalid Input"<<endl;
    }
}
