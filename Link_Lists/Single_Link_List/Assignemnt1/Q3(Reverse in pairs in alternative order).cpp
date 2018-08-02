//
//  Q3(Reverse in pairs in alternative order).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 20/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include"iostream"
using namespace std;
struct node{
    int info;
    node *next;
};

int main(){
    node *start,*p,*head;
        start=NULL;
        char ch;
        do
            {
            p=new node();
            cin>>p->info;
            p->next=NULL;
            if(start==NULL)
                {
                start=p;
                }
            else
                {
                p->next=start;
                start=p;
                }
            
            cout<<"Press y to continue your inswertion"<<endl;
            cin>>ch;
            }while(ch=='y');
        p=start;
        while(p!=NULL)
            {
            cout<<p->info<<" ";
            p=p->next;
            }
    
    int n;
    cout<<endl<<"Enter the number in ehich you want to make pairs"<<endl;
    cin>>n;
    p=start;
    head=NULL;
    int i=0;
    if(n==0){
        head=start;
        
    }
    else{
        
    
    while(p!=NULL)
        {
        int count=0;
        node *q,*start1=NULL;
        if(i%2==0)
            {
        while(p!=NULL && count<n)
            {
            count++;
            q=new node();                           //insertion begining
            q->info=p->info;
            
            q->next=start1;
            start1=q;
            p=p->next;
            }
            }
        else
            {
            while(p!=NULL && count<n)
                {
                count++;
                q=new node();                       //Insertion Ending
                q->info=p->info;
                p=p->next;
                if(start1==NULL)
                    {
                    start1=q;
                    }
                else
                    {
                    node *t=start1;
                    while(t->next!=NULL)
                        {
                        t=t->next;
                        }
                    t->next=q;
                    }
                }
            }
        q=start1;
        
        if(head==NULL)                                   //Insertion at Ending
            {
            head=start1;
            }
        else
            {
                q=head;
                while (q->next!=NULL) {
                q=q->next;
                }
                q->next=start1;
            }
        i++;
        }
    }
    p=head;
    while (head!=NULL) {
        cout<<head->info<<" ";
        head=head->next;
    }
    
        return 0;
    }

