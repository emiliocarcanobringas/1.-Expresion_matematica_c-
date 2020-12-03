/*Este programa solicita datos al usuario y muestra en la salida estándar 
el resultado de la espresión matemática: (a/b)+1 * con una precisión de 
2 decimales*/

#include <iostream> //Librería estándar de entrada de datos
#include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos la librería estándar 
	float a,b, resultado = 0; //Declaramos las variables princiapesl y la que va a realizar la operación, pero la inicializamos en 0
cout<<"Ingresa el valor de a"<<endl; //Solicitamos el valor de a 
cin>>a; //Almacenamos el valor de a
cout<<"Ingresa el valor de b"<<endl; //Solicitamos el valor de b
cin>>b; //Almacenamos el valor de b
resultado = (a/b) + 1; //Realizamos la operación
cout<<"El resultado de la operación (a/b) + 1 = ";
cout.precision(2); //Hacemos que la variable muestre su valor con una precisión de 2 decimales
cout<<resultado; //Imprimimos el resultado	
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
