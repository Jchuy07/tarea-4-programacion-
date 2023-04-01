#include "iostream"

using namespace std;
void ejercicio1()
{
    int numeros[]= {1,2,3,4,5,6,7,8,9,10};
    int suma =0;

    for (int i = 0; i < 10; i++) {
        suma += numeros[i];

    }

    cout << "La suma de los de los enteros es:  " << suma<<endl;
    }
void ejercicio2(){
    int  numeros[6] {1,2,3,4,5,6},n,mayor = 0;

    cout<<"Ingrese los valores para determinar el numero mayor: ";
    cin >>n;


    for (int i = 0 ; i < n ; i++) {
        cout<< i+1<<". Digite un numero: ";
        cin>>numeros [i];

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    cout<<"el numero mayor es:"<<mayor<<endl;
}

void ejercicio3(){
    int NUm[8];
        int cantidad, i, help ;

        cout <<"Ingrese numero de elementos: ";
        cin>>cantidad;

        for( i= 0; i < cantidad; i++ ){
            cout << (i+1) <<") Ingrese el Elemento: " ;
            cin>>NUm[i];
        }


        cout << endl;
        for(i = 0; i < cantidad; i++ ){
            cout << (i+1) << ") Elemento:"  <<NUm[i] <<endl;
        }



        for (i = 0; i < cantidad/2; i++ ){
            help = NUm[i];
            NUm [i] = NUm[cantidad-1-i];
            NUm[cantidad-1-i] = help;
        }

        cout <<endl;
        for(i = 0; i < cantidad; i++ ){
            cout << (i+1) << ") Elemento:"  <<NUm[i] <<endl;
        }
}

void ejercicio4()
{
    int numeros[]= {1,2,3,4,5,6,7,8,9,10};
    int suma =0;

    for (int i = 0; i < 10; i++) {
        suma += numeros[i];
        cout  <<  numeros[i] << " = "  << suma  << endl;
    }

    cout << "La suma de los de los enteros es:  " << suma<<endl;
}


void ejercicio5()
{
  int Fresa = 0 , sandia = 0 , melon= 0 ,  naranja = 0 ,   mango  = 0;
    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

    for (int i = 0; i < 9 ; i++)

    {
        if (frutas[i] == "fresa") {
            Fresa += 1;
        }

        if (frutas[i] == "sandia") {
            sandia += 1 ;
        }
        if (frutas[i] == "melon") {
            melon += 1 ;
        }
        if (frutas[i] == "naranja") {
            naranja += 1 ;
        }
        if (frutas[i] == "mango") {
            mango += 1 ;
        }
    }
    cout <<  "se encontro:  " << Fresa  << "  Coincidencias de la palbra  fresa" <<endl;
    cout <<  "se encontro:  " << sandia << "  Coincidencias de la palbra  sandia" <<endl;
    cout <<  "se encontro:  " << melon << "  Coincidencias de la palbra  melon" <<endl;
    cout <<  "se encontro:  " << naranja << "  Coincidencias de la palbra  naranja" <<endl;
    cout <<  "se encontro:  " << mango << "  Coincidencias de la palbra  mango" <<endl;
}
