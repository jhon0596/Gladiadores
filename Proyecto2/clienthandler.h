#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H


#include <iostream>
#include <boost/asio.hpp>


using namespace boost::asio;
using ip::tcp;
using std::string;
using std::cout;
using std::endl;

class clientHandler {
private:
    std::string p;
public:
    std::__cxx11::string getP() const;

public:
    void setP(const string &p);
    void separarMensaje();
    void send2Server(std::string dta);
    int a,b;
};


#endif // CLIENTHANDLER_H
