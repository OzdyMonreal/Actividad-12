#include <iostream>
#include "arreglo.h"

int main() {
  ArregloDinamico arreglo;
  
  arreglo.insertar_final("Dark Souls");
  arreglo.insertar_final("Pokemon");
  arreglo.insertar_final("Neptunia");
  arreglo.insertar_final("Spoore");
  arreglo.insertar_final("Fire Emblem");
  arreglo.insertar_final("Final Fantasy");
  arreglo.insertar_final("FFBE");
  arreglo.insertar_final("Fate GO");
  
  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << "   ";
  }

  cout << endl;
  arreglo.insertar_inicio("Mahouka");
  arreglo.insertar_inicio("Danmachi");

  for (size_t i = 0; i < arreglo.size(); i++)
  {
    cout << arreglo[i] << "   ";
  }
}