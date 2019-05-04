#include <iostream>


#include "objects/Gladiador.h"
#include <bits/stdc++.h>
#include "utilities/Utilities.h"
#include <boost/asio.hpp>
#include "Server.h"


using namespace boost::asio;
using ip::tcp;
using std::string;
using std::cout;
using std::endl;

int main() {







    try
    {
        cout <<"servidor iniciado"<< std::endl;
        boost::asio::io_service io_service;
        Server server(io_service);
        io_service.run();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << endl;
    }



    return 0;
}
