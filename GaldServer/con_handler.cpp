//
// Created by gacova on 27/04/19.
//

#include "con_handler.h"
#include "Simulacion.h"



con_handler::pointer con_handler::create(boost::asio::io_service &io_service) {
    return pointer(new con_handler(io_service));
}

tcp::socket &con_handler::socket() {
    return sock;
}

void con_handler::start() {
    char dato[max_length];


    sock.async_read_some(
            boost::asio::buffer(dato, max_length),
            boost::bind(&con_handler::handle_read,
                        shared_from_this(),
                        boost::asio::placeholders::error,
                        boost::asio::placeholders::bytes_transferred));


    std::cout << dato<< std::endl;
    this->data =dato;
    operaciones();





}

void con_handler::handle_read(const boost::system::error_code &err, size_t bytes_transferred) {
    if (!err) {

    } else {
        std::cerr << "error: " << err.message() << std::endl;
        //sock.close();
    }
}

void con_handler::handle_write(const boost::system::error_code &err, size_t bytes_transferred) {
    if (!err) {

    } else {
        std::cerr << "error: " << err.message() << endl;
        // sock.close();
    }
}

void con_handler::operaciones() {

    Simulacion s1 =Simulacion();


    this->message=s1.getTorre()+"\n";

    sock.async_write_some(
            boost::asio::buffer(this->message, max_length),
            boost::bind(&con_handler::handle_write,
                        shared_from_this(),
                        boost::asio::placeholders::error,
                        boost::asio::placeholders::bytes_transferred));


  /*  this->message=s1.getGlad()+"\n";
    sock.async_write_some(
            boost::asio::buffer(this->message, max_length),
            boost::bind(&con_handler::handle_write,
                        shared_from_this(),
                        boost::asio::placeholders::error,
                        boost::asio::placeholders::bytes_transferred));


*/

    this->message="";

}



template<typename T>
std::vector<T> con_handler::as_vector(boost::property_tree::ptree const &pt, const boost::property_tree::ptree::key_type &key) {
    std::vector<T> r;
    for (auto& item : pt.get_child(key))
        r.push_back(item.second.get_value<T>());
    return r;
}

