#ifndef __GENERAL_H__
#define __GENERAL_H__


#define MAX 0x30

struct TEmpleado {
    char nombre[MAX];
    char apellidos[MAX];
    double salario;
    struct TEmpleado *siguiente;
};

#endif
