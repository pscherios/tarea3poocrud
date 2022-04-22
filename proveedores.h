#pragma once
#include "ConexionDB.h"
#include "atriprov.h"
class conprov :
    public atprov
{         
public:
    prove() {

    }
    prove(string pro, string nt, string dir, string tel) : atprov(pro, nt, dir, tel) {
    }

    void setProveedor(string pro) { proveedor = pro; }
    void setNit(string nt) { nit = nt; }
    void setDireccion(string dir) { direccion = dir; }
    void setTelefono(string p_cos) { telefono = tel; }
 
    string getProveedor() { return proveedor; }
    string getNit() { return nt; }
    string getDireccion() { return dir; }
    string getTelefono() { return tel; }

    void leer() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        MYSQL_ROW fila;
        MYSQL_RES* resultado;
        cn.abrir_conexion();
        if (cn.getConectar()) {
            cout << "------------ Datos de los clientes ------------" << endl;
            string consulta = "select * from proveedores";
            const char* c = consulta.c_str();
            q_estado = mysql_query(cn.getConectar(), c);
            if (!q_estado) {
                resultado = mysql_store_result(cn.getConectar());
                while (fila = mysql_fetch_row(resultado)) {
                    cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << endl;
                }

            }
            else {
                cout << " xxx Error al Consultar  xxx" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void crear() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "INSERT INTO proveedores(proveedor,nit,direccion,telefono)VALUES('" + proveedor + "','" + nit + "','" + direccion + "','" + telefono + "'); ";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "Ingreso exitoso" << endl;
            }
            else {
                cout << "Error al ingresar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
    }

    void borrar() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "DELETE FROM proveedores WHERE proveedor='" + proveedor + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "Se elimino con exito" << endl;
            }
            else {
                cout << "Error al eliminar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void actualizar() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "UPDATE proveedor\
                             SET proveedor='" + proveedor + "',nit='" + nit + "', direcccion = '" + direccion + "', telefono = '" + telefono + "'\
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "Actualizacion exitosa" << endl;
                system("pause");
            }
            else {
                cout << "Error al Actualizar" << endl;
                system("pause");
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
        system("pause");

    }



    void crearM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            
            string insert = "INSERT INTO marcas(marca)VALUES('" + id_marca + "'); ";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }


    void leerM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        MYSQL_ROW fila;
        MYSQL_RES* resultado;
        cn.abrir_conexion();
        if (cn.getConectar()) {
            cout << "------------ Datos de la tabla marca ------------" << endl;
            string consulta = "select * from marcas";
            const char* c = consulta.c_str();
            q_estado = mysql_query(cn.getConectar(), c);
            if (!q_estado) {
                resultado = mysql_store_result(cn.getConectar());
                while (fila = mysql_fetch_row(resultado)) {
                    cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                }

            }
            else {
                cout << " xxx Error al Consultar  xxx" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void borrarM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "DELETE FROM marcas WHERE marca='" + id_marca + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void actualizarM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "UPDATE marcas\
                             SET marca='" + id_marca + "'\
                             WHERE idMarcas='" + use + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
                system("pause");
            }
            else {
                cout << "error al insertar" << endl;
                system("pause");
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
        system("pause");

    }

};

