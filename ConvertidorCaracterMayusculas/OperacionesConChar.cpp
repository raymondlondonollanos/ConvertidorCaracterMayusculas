#include "OperacionesConChar.h"
#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>
#include <cctype>

//Los array fijos fijos siempre decaen a punteros por eso podemos utilizar [] o char* como notacion
void operacionesConChar::fn( const char* fr)
{
	//utilizamos size_t que es un tipo integer positivo, el cual optimiza el bucle, este itereara n veces hasta que encuente un terminador nulo
	for (std::size_t i{ 0 }; fr[i] != '\0'; ++i)
	{
		//cuando i = 0, fr[0], el cual tendra el valor de H, tolower recive valores unsigend char por eso es necesario realizar ese 
		//conversion para evitar incovenientes. tolower devolver un valor integer tipo size_t el cual debera ser otra vez convertido con estatic cast para poder mostar en pantalla
		std::cout << static_cast<char>(tolower(static_cast<unsigned char>(fr[i])));
	}

}

void operacionesConChar::conversionModerna(std::string_view vista)
{
	//creamos una vista porque para utilizar transform necesitamos que el objeto sea dueno, aunque string_view no es dueño 
	//cundo inicializamos  copia crea un objeto en binario lo cual nos permite realizar algunas modificaciones a esa vista
	std::string copia{ vista };

	//std::transforma 
	std::transform(copia.begin(), copia.end(), copia.begin(),
		[](unsigned char c) { return static_cast<char>(tolower(static_cast<unsigned char>(c))); });

	std::cout << copia << '\n'; // salida: "hola como estas"
}
