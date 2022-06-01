/* EjemploTipos.cpp
 * Probar aplicaciones de tipos de datos
 * Kevin Maidana
 * 20220512
 */

#include <cassert>
#include <iostream>
#include <string>
#include <cstring>

using namespace std::literals;

int main (){
    /*
    BOOL
    Conjunto de valores: representado matematicamente por dos valores; verdaero o falso.
    */
    assert(true);
    assert(true != false);
    assert(true == not false);
    assert(true and not false);
    assert(true or false);
    assert(true and false or true);
    

//--------------------------------------------------------------------------------------------------
    /*
    CHAR
    Conjunto de valores: todos los caracteres disponibles en la tabla ASCII extendido. (2^8 = 255 + 00 (256 posibles carateres))
    Siempre representan su valor numérico
    */

    assert('A'!='B');
    assert('A' < 'B');
    assert('A'== 65);
    assert('B' + 'A' != 'b' + 'a');
    assert('B' - 'A' == 'b' - 'a');
    assert('a' > 'A');
    assert('1' + '1' != '2');
    assert('A' + 'L' + 'E' == 'L' + 'E' + 'A');

//--------------------------------------------------------------------------------------------------
    /*
    UNSIGNE
    Conjunto de valores: representado matematicamente por los naturales. (N) 
    4 bytes. 2^32 combinaciones diferentes
    */
    //u para unsigned
    assert(1u + 1u == 2u);
    assert(3u > 2u);
    assert(5u - 2u != 4u);
    assert(13u % 10u == 6u / 2u);
    
//--------------------------------------------------------------------------------------------------
    /*
    INT
    Conjunto de valores: representado matematicamente por los enteros. (Z)
    */
    assert(-3 + 2 == -1);
    assert(-10 < 9);
    assert(-1 - -2 != 3);
    assert(2 * 2 == 4);
    assert(50 % 5 == 0);
    
//--------------------------------------------------------------------------------------------------
    /*
    DOUBLE
    Conjunto de valores: representado matematicamente por los reales. (R
    */
    assert(10.2 + -9.5 >= 0.0);
    assert(0.1 + 0.1 == 0.2);
    assert(1.0 / 10.0 == 0.1);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);  //f = float 
    assert(2.0 * 3.0 <= 7.0);

//--------------------------------------------------------------------------------------------------
    /*
    STRING
    Tipo de dato compuesto, formado por caracteres. 
    A diferencia de el tipo CHAR, se expresa entre comillas.
    */
    assert("A"s == "A"s);
    assert("A"s != "a"s);
    assert("B"s > "A"s);
    assert("AA"s < "aa"s);
    assert("A"s + "L"s + "E"s == "ALE"s);
    assert("Mai"s + "dana" == "Maidana"s);
    assert("Mai"s + "dana" != "andaiaM");
}
