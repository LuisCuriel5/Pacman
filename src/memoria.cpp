#include <TazoDorado.hpp>
#include <iostream>
using namespace std; 
int main()
{
//     int entero = 3; 
//     bool boleno = true; 
//     char letra = 'a';
//     float decimal = 1.2; 
//     cout << "tamaño entero " << sizeof(entero) << endl; 
//     cout << "tamaño boleno " << sizeof(boleno) << endl; 
//     cout << "tamaño letra " << sizeof(letra) << endl; 
//     cout << "tamaño decimal " << sizeof(decimal) << endl;
//     cout << "tamaño Tazo:  " << sizeof(TazoDorado) << endl;
   
//     TazoDorado tazo1; 
//     TazoDorado tazo2; 
//     cout << "Direccion de tazo:  " << &tazo1 << endl;
//     cout << "Direccion de tazo:  " << &tazo2 << endl;

//     TazoDorado tazos[20];
//     for (size_t i = 0; i < 10; i++)
//     {
//         cout<<"Direccion Tazo "<<i<<" : "<<&tazos[i]<<endl;
//     }

//     void* direccion = malloc(1); //bytes de reserva

    ///C --------------------------
    TazoDorado* direccion;
    direccion = (TazoDorado *) malloc(sizeof(TazoDorado));
    direccion->Inicializar();
    cout<<"Valor en direccion: "<< direccion->Flotando() <<endl;

    ///C++ -----------------------
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();





    return 0;
}


