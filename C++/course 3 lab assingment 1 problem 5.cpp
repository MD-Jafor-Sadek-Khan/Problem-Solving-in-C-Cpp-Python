#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* nxt;




};


class LinkedList
{
public:
    node* head;
    int sz;


    LinkedList()
    {
        head=NULL;
        sz=0;

    }

    node* CreateNode(int value)
    {

        node* newnode= new node;
        newnode->nxt=NULL;
        newnode->data=value;
        sz++;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node* a=CreateNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head=a;


    }

    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {

            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<endl;
    }

    int Search(int value)
    {
        node* a=head;
        int c=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {

                return c;
            }
            a=a->nxt;
            c++;
        }


        return -1;

    }

    void all_occurance(int value)
    {
        node* a=head;
        int c=0;

        while(a!=NULL)
        {

            if(a->data==value)
            {
                cout<<c<<endl;
            }
            a=a->nxt;
            c++;



        }
    }


    int getSize()
    {
        return sz;
    }

    int getValue(int indx)
    {
        node* a=head;
        int itr=0;
        while(a!=NULL)
        {
            if(itr==indx)
            {
                return a->data;

            }



            a=a->nxt;
            itr++;
        }
        return -1;
    }

   void printReverse()
   {
       RecursionReverse(head);
       cout<<endl;
   }

   void RecursionReverse(node* p)
   {
       if(p!=NULL)
       {
            RecursionReverse(p->nxt);
            cout<<p->data<<" ";

       }

   }

    void swapFirst()
    {
        node* a;
        node* temp2;
        node* temp;


        if(head->nxt==NULL)
        {
           return;
        }

        temp=head;

        head=head->nxt;
        temp2=head->nxt;
        head->nxt=temp;
        temp->nxt=temp2;

    }

};


int main()
{
  LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();




}

