//
// Created by gacova on 27/04/19.
//

#ifndef GALDSERVER_CON_HANDLER_H
#define GALDSERVER_CON_HANDLER_H

#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/foreach.hpp>
#include <boost/property_tree/ptree.hpp>
#include <chrono>
#include <thread>


using namespace boost::asio;
using ip::tcp;
using std::cout;
using std::endl;

class con_handler: public boost::enable_shared_from_this<con_handler> {
public:
    /**
    *@brief  puntero compartido
    *
    * */
    typedef boost::shared_ptr<con_handler> pointer;

    /**
    *@brief  constructor que hereda  de sock
    *@param io_service servicio de entrada y salida
    * */
    con_handler(boost::asio::io_service &io_service) : sock(io_service) {}

    /**
    *@brief  puntero estatico
    *@param io_service servicio de entrada y salida
     * @return un puntero creado
    * */
    static pointer create(boost::asio::io_service &io_service);

    /**
    *@brief  crea la dirreccion el socket
     * @return el socket
    * */
    tcp::socket &socket();

    /**
    *@brief  metodo que recibe las peticiones de forma asincronica
    * */
    void start();

    /**
    *@brief  metodo que recibe las peticiones de forma asincronica
    * */
    void handle_read(const boost::system::error_code &err, size_t bytes_transferred);

    /**
    *@brief  metodo que manda los resultados al cliente
    * */
    void handle_write(const boost::system::error_code &err, size_t bytes_transferred);

    /**
    *@brief  metodo que realiza las acciones para la simulacion y los multiples xml
    * */
    void operaciones();

private:

    /**
    *@brief  maximo tamaño de entrada y salida
     *
    * */

    enum {
        max_length = 2048
    };
    /**
    *@brief  socket de entrada del servidor
     *
    * */
    tcp::socket sock;
    /**
    *@brief  string del mensaje de retorno
     *
    * */
    std::string message = " ";


    /**
    *@brief  string para la entrada
     *
    * */
    std::string data;

    void eliminarBasura();
};

#endif //GALDSERVER_CON_HANDLER_H
