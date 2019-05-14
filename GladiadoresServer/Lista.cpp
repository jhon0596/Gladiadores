//
// Created by gacova on 14/05/19.
//

#include "Lista.h"
Lista::Lista()
{
    head = tail = nullptr;
}

listanodo* Lista::getTail()
{
    return tail;
}

void Lista::printMe()
{
    listanodo* tmp = head;
    while(tmp != nullptr)
    {
        std::cout<< tmp->getX()<<", "<<tmp->getY()<<" -> ";
        tmp = tmp->getNext();
    }
    std::cout<< ".\n";
}

void Lista::cleanMe()
{
    std::cout<<"Limpiando\n";
    listanodo* tmp = head;
    while(tmp != nullptr)
    {
        std::cout<< tmp->getX()<<", "<<tmp->getY()<<" -> ";
        head = tmp->getNext();
        delete tmp;
        tmp = head;
    }
    std::cout<< "\n";
}

void Lista::enqueue(int x, int y)
{
    std::cout<< "Ingrese "<< x<< ", "<< y<< std::endl;
    listanodo* tmp = new listanodo();
    tmp->setX(x);
    tmp->setY(y);

    if(head == nullptr)
    {
        head = tail = tmp;
    }else
    {
        tail->setNext(tmp);
        tmp->setBefore(tail);
        tail = tmp;
    }
}

void Lista::dequeue()
{
    std::cout<< "Estoy en  "<< tail->getX()<< ", "<< tail->getY()<<". Me devuelvo, no hay camino."<< std::endl;
    if(head!=tail)
    {
        listanodo* tmp = tail->getBefore();
        tmp->setNext(tail->getNext());
        delete tail;
        tail = tmp;
    }else
    {
        delete head;
        head = tail = nullptr;
    }
}

bool Lista::find(int x, int y)
{
    std::cout<< "voy a buscar "<<x<< ", "<<y<< std::endl;
    listanodo* tmp = head;

    while(tmp != nullptr)
    {
        if((tmp->getX() == x) && (tmp->getY() == y))
        {
            return true;
        }
        tmp = tmp->getNext();
    }
    return false;
}

listanodo* Lista::getHead()
{
    return head;
}
