#pragma once
#include <iostream>
#include <jdbc/cppconn/driver.h>
#pragma once
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/statement.h>
#include <jdbc/mysql_connection.h>
#include <jdbc/mysql_driver.h>
#include <jdbc/cppconn/prepared_statement.h>

class Conexion {
private:
    sql::Connection* con;

public:
    Conexion();
    ~Conexion();

    void conectar();
    sql::Connection* getConexion();
};

