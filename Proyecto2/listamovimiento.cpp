#include "listamovimiento.h"

listamovimiento::listamovimiento()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}
void listamovimiento::addinicio(int n){
    nodomovimiento *temp=new nodomovimiento(n);
    temp->setnext(nullptr);
    if(head == nullptr){
            head=temp;
            tail=temp;

            temp= nullptr;
     }else{
            tail->setnext(temp);
            tail =temp;

     }
        size++;
}
void listamovimiento::deleteF() {
    nodomovimiento *temp;
    temp=head;
    head=head->getnext();
    delete temp;
    size--;
}
