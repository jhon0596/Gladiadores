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

void Lista::setTail(listanodo *value)
{
    tail = value;
}

void Lista::printMe()
{
    listanodo *current = head;
    while(current != nullptr)
    {
        std::cout<< current->getData()->getX()<<","<<current->getData()->getY();
        current = current->getNext();
    }std::cout<<"// \n";
}

void Lista::cleanMe()
{
    std::cout<<"Limpiando\n";
    listanodo* tmp = head;
    while(tmp != nullptr)
    {
        std::cout<< tmp->getData()->getX()<<", "<<tmp->getData()->getY()<<" -> ";
        head = tmp->getNext();
        delete tmp;
        tmp = head;
    }
    std::cout<< "\n";
}

void Lista::dequeue()
{
    std::cout<< "Ya revise  "<< tail->getData()->getX()<< ", "<< tail->getData()->getY()<< std::endl;
    if(head!=tail)
    {
        listanodo* tmp = head;
        head = head->getNext();
        delete tmp;
    }else
    {
        delete head;
        head = tail = nullptr;
    }
}

void Lista::sort()
{
    std::cout<< "Entre el sort\n";
    int n = size();std::cout<< "Tamanno: "<< n<<std::endl;
    bool flag;

    if(n>1)
    {
        listanodo* current = head;
        std::cout<<"Ordenando: "<< current->getData()->getX()<<", "<<current->getData()->getX()<<std::endl;

        for (int i = 0; i < n-1; i++)
        {
            current = head;
            flag = false;
            for (int  j = 0; j < n -1 -i; j++)
            {
                if(current->getData()->getF() > current->getNext()->getData()->getF())
                {
                    flag = true;
                    swap(current, current->getNext());
                }
                current = current->getNext();


            }
            if(!flag) break;
        }
    }
    printMe();
}

void Lista::swap(listanodo *nodo1, listanodo *nodo2)
{
    std::cout<< "Entre el swap\n";
    std::cout<< nodo1->getData()->getX()<<", "<<nodo1->getData()->getX()<<std::endl;
    std::cout<< nodo2->getData()->getX()<<", "<<nodo2->getData()->getX()<<std::endl;
    Nodo_Matriz* tmp = nodo1->getData();
    nodo1->setData(nodo2->getData());
    nodo2->setData(tmp);
    std::cout<< "termine el swap\n";
}

int Lista::size()
{
    int count = 0;
    if( head == nullptr)
    {
        return count;
    }else
    {
        listanodo* tmp = head;
        while( tmp != nullptr)
        {
            tmp = tmp->getNext();
            count++;
        }
        return count;
    }
}

void Lista::enqueue(Nodo_Matriz *nodo)
{
    std::cout<< "Ingrese "<< nodo->getX()<< ", "<< nodo->getY()<< std::endl;
    listanodo* tmp = new listanodo();
    tmp->setData(nodo);

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

void Lista::pop()
{
    std::cout<< "Estoy en  "<< tail->getData()->getX()<< ", "<< tail->getData()->getY()<<". Me devuelvo, no hay camino."<< std::endl;
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

bool Lista::find(Nodo_Matriz *nodo)
{
    std::cout<< "voy a buscar "<<nodo->getX()<< ", "<<nodo->getY()<< std::endl;
    listanodo* tmp = head;

    while(tmp != nullptr)
    {
        if(tmp->getData() == nodo)
        {
            return true;
        }
        tmp = tmp->getNext();
    }
    return false;
}

listanodo *Lista::getHead()
{
    return head;
}

void Lista::setHead(listanodo *value)
{
    head = value;
}