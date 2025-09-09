#include <iostream>
#include <string>
#include <cctype>
#include "OperacionesConChar.h"
#include <string>
#include <algorithm>

int main()
{
    const char frase[] {"Hola amor"};

    operacionesConChar::fn(frase);

    const char frase2[]{ " H1223olaWWW a???or" };

    std::cout << std::endl;

    operacionesConChar::fn(frase2);

    std::cout << std::endl;

    operacionesConChar::conversionModerna(frase);

    char nuevaFrase[25]{};

    // solicitar al usuario que ingrese una frase para convertir todas en letras minusculas
    std::cout << "\nIngresa una frase para convertir letras a minusculas: ";
    // si utilizamos char para almacenar es importante definir para garantizar el terminador nulo
    std::cin.getline(nuevaFrase, 25);

    operacionesConChar::conversionModerna(nuevaFrase);

    return 0;
}