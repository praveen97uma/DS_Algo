
#include "stack.h"
template<class T>
bool LStack<T>::isEmpty()
{
    return head==NULL;
}


template<class T>
void LStack<T>::push(T& el)
{
    Node<T>* temp1,*temp2;
    temp1=new Node<T>();
    temp1->data=el;
    if (head==NULL)
    {
            head=temp1;
            ++coun;
    }
    else
    {
        temp2=head;
        head=temp1;
        temp2->next=temp1;
        temp1->prev=temp2;
        ++coun++;
    }

}





template<class T>
T LStack<T>::pop()
{
    Node<T>* temp1,*temp2;
    if (head==NULL)
    {
        return;

    }
    else
    {
        temp1=head;
	return temp1->data;
        temp2=temp1->prev;
        head=temp2;
        delete temp1;
        coun--;
    }
}




template<class T>
int LStack<T>::count()
{
    return coun;
}




template<class T>
void LStack<T>::display()
{
    Node<T> * temp;
    if (head==NULL)
    {

        return;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->prev;
        }
	cout<<endl;

    }

}

template<class T>
T LStack<T>::top()
{
    return head->data;
}




