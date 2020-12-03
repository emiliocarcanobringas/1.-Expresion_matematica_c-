/*Este programa solicita datos al usuario y muestra en la salida est�ndar 
el resultado de la espresi�n matem�tica: (a/b)+1 * con una precisi�n de 
2 decimales*/

#include <iostream> //Librer�a est�ndar de entrada de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos la librer�a est�ndar 
	float a,b, resultado = 0; //Declaramos las variables princiapesl y la que va a realizar la operaci�n, pero la inicializamos en 0
cout<<"Ingresa el valor de a"<<endl; //Solicitamos el valor de a 
cin>>a; //Almacenamos el valor de a
cout<<"Ingresa el valor de b"<<endl; //Solicitamos el valor de b
cin>>b; //Almacenamos el valor de b
resultado = (a/b) + 1; //Realizamos la operaci�n
cout<<"El resultado de la operaci�n (a/b) + 1 = ";
cout.precision(2); //Hacemos que la variable muestre su valor con una precisi�n de 2 decimales
cout<<resultado; //Imprimimos el resultado	
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
