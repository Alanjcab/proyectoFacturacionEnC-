#include <iostream>
#include "Conexion.h"

Conexion::Conexion() {
    con = nullptr;
    conectar();
}

Conexion::~Conexion() {
    if (con != nullptr) {
        delete con;
    }
}

void Conexion::conectar() {
    sql::ConnectOptionsMap connection_properties;
    connection_properties["hostName"] = "tcp://127.0.0.1";
    connection_properties["port"] = 3306;
    connection_properties["userName"] = "root";
    connection_properties["password"] = "1905";
    connection_properties["OPT_RECONNECT"] = true;
    connection_properties["OPT_SSL_MODE"] = sql::SSL_MODE_DISABLED;

    try {
        sql::mysql::MySQL_Driver* driver =
            sql::mysql::get_mysql_driver_instance();

        con = driver->connect(connection_properties);
        con->setSchema("sistemafacturacion");

        if (con && !con->isClosed()) {
            std::cout << "Conexion exitosa" << std::endl;
        }
    }
    catch (sql::SQLException& e) {
        std::cerr << "Error de SQL: " << e.what() << std::endl;
    }
}

sql::Connection* Conexion::getConexion() {
    return con;
}









