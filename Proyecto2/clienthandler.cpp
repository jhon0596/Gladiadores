#include "clienthandler.h"
#include <mainwindow.h>
#include "boost/property_tree/xml_parser.hpp"
#include "boost/property_tree/ptree.hpp"
#include <iostream>
void clientHandler::send2Server(std::string dta) {
    boost::asio::io_service io_service;
    //socket creation
    tcp::socket socket(io_service);
    //connection
    socket.connect( tcp::endpoint( boost::asio::ip::address::from_string("127.0.0.1"), 1234 ));
    // request/message from client
    const string msg = dta;
    boost::system::error_code error;
    boost::asio::write( socket, boost::asio::buffer(msg), error );
    if( !error ) {
        cout << "Client sent hello message!" << endl;
    }
    else {
        cout << "send failed: " << error.message() << endl;
    }
    // getting response from server
    boost::asio::streambuf receive_buffer;
    boost::asio::read(socket, receive_buffer, boost::asio::transfer_all(), error);
    if( error && error != boost::asio::error::eof ) {
        cout << "receive failed: " << error.message() << endl;
    }
    else {
        const char* data = boost::asio::buffer_cast<const char*>(receive_buffer.data());
        p =data;
        separarMensaje(p);
        cout << p << endl;



}}

    void clientHandler::setP(const string &p) {
        clientHandler::p = p;
    }

string clientHandler::getP() const {
     return p;

}

void clientHandler::separarMensaje(std::string info){

    using boost::property_tree::ptree;
    std::istringstream is (info);

    ptree pt2;



        read_xml(is,pt2);

        this->propSev=pt2;




}
