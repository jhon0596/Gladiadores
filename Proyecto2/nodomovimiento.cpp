#include "nodomovimiento.h"

nodomovimiento::nodomovimiento(int nuevo)
{
    pos = nuevo;
    next = nullptr;

}
void nodomovimiento::setnext(nodomovimiento* sig){
    next = sig;
}
nodomovimiento* nodomovimiento::getnext(){
    return next;
}
void nodomovimiento::setpos(int nuevopos){
    pos = nuevopos;
}
int nodomovimiento::getpos(){
    return pos;
}
