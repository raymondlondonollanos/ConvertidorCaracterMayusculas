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

	return 0;
}