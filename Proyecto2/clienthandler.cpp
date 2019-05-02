#include "clienthandler.h"
#include <mainwindow.h>
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
        int pos = p.find(",");
        string sub1 = p.substr(pos-1);
        string sub2 = p.substr(pos+1);
        a = std::atoi(sub1.c_str());
        b = std::atoi(sub2.c_str());
        cout << p << endl;



}}

    void clientHandler::setP(const string &p) {
        clientHandler::p = p;
    }

string clientHandler::getP() const {
     return p;

}

void clientHandler::separarMensaje(){
    string mensaje = getP();
    int pos = mensaje.find(",");
    string sub1 = p.substr(pos-1);
    string sub2 = p.substr(pos+1);
    a = std::atoi(sub1.c_str());
    b = std::atoi(sub2.c_str());

}
