//
//  Q11(Common Elements in two linklist).cpp
//  Link_Lists
//
//  Created by Pankaj Devrath on 23/07/18.
//  Copyright © 2018 Pankaj Devrath. All rights reserved.
//

#include "iostream"
#include "map"
using namespace std;

struct node{
    int info;
    node *next;
};
void insertNode(node **start)
{
    node *p;
    int item;
    char ch;
    *start=NULL;
    do {
        p=new node();
        cin>>item;
        p->info=item;
        p->next=NULL;
        if ((*start)==NULL) {
            (*start)=p;
            (*start)->next=NULL;
        }
        else
            {                                      // Insertion in begining
                p->next=*start;
                *start=p;
                
            }
        cout<<"Press y if you want to continue your insertion"<<endl;
        cin>>ch;
        
    }while(ch=='y');
    
}
node* elementCommon(node *FirstNode,node *SecondNode)
{
    
    map<int,int> mapData;
    node *FinalNode=NULL,*p;
    p=FirstNode;
    while (p!=NULL)
        {
        mapData[p->info]=1;
        p=p->next;
        }
    p=SecondNode;
    while (p!=NULL)
        {
        if(mapData.find(p->info)!=mapData.end())
            {
            mapData[p->info]=2;
            }
        p=p->next;
        }
    for(auto x: mapData)
        {
        if(x.second==2)
            {
            p=new node();
            p->info=x.first;
            p->next=NULL;
            if(FinalNode==NULL)
                {
                FinalNode=p;
                }
            else
                {
                p->next=FinalNode;
                FinalNode=p;
                }
            }
        }
    return FinalNode;
}
void display(node * start)
{
    node *p=start;
    while(p!=NULL)
        {
        cout<<p->info<<" ";
        p=p->next;
        }
    cout<<endl;
}
int main(){
    node *FirstNode=NULL,*SecondNode=NULL,*FinalNode=NULL;
    cout<<"Enter the elements of the first list :"<<endl;
    insertNode(&FirstNode);
    cout<<"Enter the elements of the second list :"<<endl;
    insertNode(&SecondNode);
    FinalNode=elementCommon( FirstNode, SecondNode);
    cout<<"Elements of First List-->"<<endl;
    display(FirstNode);
    cout<<"Elements of second List-->"<<endl;
    display(SecondNode);
    cout<<"Elememts of the Final List in sorted order-->"<<endl;
    display(FinalNode);
}
