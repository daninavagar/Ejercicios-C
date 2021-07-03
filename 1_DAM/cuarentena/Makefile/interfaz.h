#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#include <stdio.h>
#include <stdlib.h>

#include "general.h"

#ifdef __cplusplus
extern "C"{ 
#endif
      void title ();
      unsigned menu ();
      void datos_empleado (struct TEmpleado *d);
#ifdef __cplusplus
}

#endif

#endif
