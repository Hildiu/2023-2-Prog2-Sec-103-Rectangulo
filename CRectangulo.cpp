//
// Created by mbermejo on 09/10/2023.
//

#include "CRectangulo.h"


double CRectangulo::perimetro()
{
    return 2 * largo + 2 *ancho;
}


double CRectangulo::area()
{
    return largo * ancho;
}