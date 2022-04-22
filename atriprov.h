#pragma once
#include <iostream>
using namespace std;
class atprov
{
protected: string proveedor, nit, direccion, telefono;


protected:
    detprod() {

    }
    detprod(string pro, string nt, string dir, string tel) {
        proveedor = pro;
        nit = nt;
        direccion = dir;
        telefono = tel;
    }

};

