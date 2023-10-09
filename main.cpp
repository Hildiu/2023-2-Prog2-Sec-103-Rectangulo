//------------------------------------------------
// Dato de Entrada:  largo, ancho (double)
// Dato de Salida:  area, perimetro (double)
//-------------------------------------------------

#include "CRectangulo.h"

int main()
{
  CRectangulo    R1;   //--- usando el constructor por defecto

  cout << "R1 \n";
  R1.setLargo(50);
  R1.setAncho(25);
  cout << "El perimetro es: " << R1.perimetro() << "\n";
  cout << "El area es     : " << R1.area() << "\n";

  cout<< "\n R2 \n";
  double l, a;
  cout << "Largo : "; cin >> l;
  cout << "Ancho : "; cin >> a;
  CRectangulo R2(l,a);
  cout << "El perimetro es : " << R2.perimetro() << "\n";
  cout << "El area es      : " << R2.area() << "\n";

  cout << "\nAhora modificaremos el valor del largo y del ancho de R2 aumentando el valor en 10\n";
  R2.setLargo(R2.getLargo() + 10);
  R2.setAncho(R2.getAncho() + 10);
  cout << "El perimetro es : " << R2.perimetro() << "\n";
  cout << "El area es      : " << R2.area() << "\n";
    return 0;
}
