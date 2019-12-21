/* 
 * File:   main.cpp
 * Author: renegomez
 *
 * Created on 15 de diciembre de 2019, 06:28 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    float x[] = {2.718281828, -3.141592654, 1.414213562, 0.5772156649, 0.3010299957};
    float y[] = {1486.2497, 878366.9879, -22.37492, 47737114.647, 0.000185049};
    float suma_asc(0),suma_des(0);
    double suma_ascd(0), suma_desc(0);
    
    cout << fixed << setprecision(20) << endl;
    
    
    cout << " SIMPLE PRECISION " << endl;
    /*----------Suma Ascendente-Descendente----------*/
    for(int i = 0; i < 5; i++)
    {
        suma_asc += (x[i]*y[i]);
        suma_des += (x[4-i]*y[4-i]);
    }
    cout << suma_asc << " " << suma_des << " ";
    
    /*----------Suma Mayor-Menor----------*/
    /*Suma de numeros positivos: Mayor-Menor*/
    suma_asc = (x[0]*y[3]) + (x[2]*y[1]) + (x[3]*y[0]) + (x[4]*y[4]);
    suma_des = (x[1]*y[2]);
    cout << suma_asc + suma_des << " ";
    
    /*----------Suma Menor-Mayor----------*/
    /*Suma de numeros positivos: Menor-Mayor*/
    suma_asc = (x[4]*y[4]) + (x[3]*y[0]) + (x[2]*y[1]) + (x[0]*y[3]);
    suma_des = (x[1]*y[2]);
    cout << suma_asc + suma_des << endl;
    
    
    cout << " DOBLE PRECISION " << endl;
    /*----------Suma Ascendente-Descendente----------*/
    for(int i = 0; i < 5; i++)
    {
        suma_ascd += (x[i]*y[i]);
        suma_desc += (x[4-i]*y[4-i]);
    }
    cout << suma_ascd << " " << suma_desc << " ";
    
    /*----------Suma Mayor-Menor----------*/
    /*Suma de numeros positivos: Mayor-Menor*/
    suma_ascd = (x[0]*y[3]) + (x[2]*y[1]) + (x[3]*y[0]) + (x[4]*y[4]);
    suma_desc = (x[1]*y[2]);
    cout << suma_ascd + suma_desc << " ";
    
    /*----------Suma Menor-Mayor----------*/
    /*Suma de numeros positivos: Menor-Mayor*/
    suma_ascd = (x[4]*y[4]) + (x[3]*y[0]) + (x[2]*y[1]) + (x[0]*y[3]);
    suma_desc = (x[1]*y[2]);
    cout << suma_ascd + suma_desc << endl;
    
    return 0;
}

