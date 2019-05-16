#ifndef NODOMOVIMIENTO_H
#define NODOMOVIMIENTO_H


class nodomovimiento
{
public:
    nodomovimiento(int nuevo);
      int pos;
      nodomovimiento *next;
      void setnext(nodomovimiento* sig);
      nodomovimiento* getnext();
      void setpos(int nuevopos);
      int getpos();
};

#endif // NODOMOVIMIENTO_H
