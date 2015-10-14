/* 
 * File:   main.cpp
 * Author: alan.calderon
 *
 * Created on 25 de septiembre de 2015, 05:16 PM
 */

#include <iostream>
#include <string>
#include <memory>
#include <thread>
using namespace std;

#include "Grafo.h"
/*
 * 
 */
int main(int argc, char** argv) {
    shared_ptr ptr;
    string nombre_archivo = "grafoMuyPeq.txt";
    string salida;
    Grafo<int> grfInt(nombre_archivo);
    cout << grfInt.aHil() << endl;
    if (grfInt.ciclos(0,salida))
        cout << "sí encontró un ciclo: " << salida << endl;
    std::thread first (foo);     // spawn new thread that calls foo()
    std::thread second (bar,0);  // spawn new thread that calls bar(0)

    std::cout << "main, foo and bar now execute concurrently...\n";

    // synchronize threads:
    first.join();                // pauses until first finishes
    second.join();               // pauses until second finishes

    std::cout << "foo and bar completed.\n";        
    return 0;
}

