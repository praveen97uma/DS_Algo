#ifndef LSTACK_H
#define LSTACK_H

#include<iostream>
using namespace std;

//Node holds the data
template<class T>
class Node
{
    public:
    //friend class LStack<T>;
    Node* next;
    Node* prev;
    T data;

    Node(){next=prev=NULL,data=0;};
};



template<class T>
class LStack
{

    public:
        void push(T& el);
        T pop();
        void display();
        int count();
        T top();
        LStack(){head=NULL,coun=0;};
        bool isEmpty();
    private:
        Node<T> *head;
        int coun;
};

#endif
