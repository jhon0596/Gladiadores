#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H


#include <iostream>
#include <boost/asio.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>

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
    boost::property_tree::ptree propSev;
public:
    void setP(const string &p);
    void separarMensaje(std::string info);
    void send2Server(std::string dta);
    int a,b;
};


#endif // CLIENTHANDLER_H
