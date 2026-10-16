#include <iostream>
using namespace std;


void contarPalabra(char texto[], char palabra[],int punteroTexto, int punteroPalabra, int &cantEncontrados) {
    if (texto[punteroTexto]=='\0') return;
    if (texto[punteroTexto] == palabra[punteroPalabra]) {
        if (palabra[punteroPalabra+1] == '\0' && texto[punteroTexto+1] == ' ' or texto[punteroTexto+1] == '\0') cantEncontrados++;
        contarPalabra(texto, palabra,punteroTexto+1,punteroPalabra+1,cantEncontrados);
    }else {
        contarPalabra(texto, palabra,punteroTexto+1,0,cantEncontrados);
    }
}

int main() {
    char texto[]="hola mundo hola amigos hola", palabra[]="hola";
    int cantEncontrados=0;
    contarPalabra(texto, palabra,0,0,cantEncontrados);
    cout<<"La cantidad de veces que se encontro la palabra en el texto es: "<<cantEncontrados<<endl;
    return 0;
}