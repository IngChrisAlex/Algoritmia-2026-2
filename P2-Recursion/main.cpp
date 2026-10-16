#include <iostream>
using namespace std;


void contarPalabra(char texto[], char palabra[],int punteroTexto, int punteroPalabra, int &cantEncontrados, bool enPalabra) {
    if (texto[punteroTexto]=='\0') return;
    if ((texto[punteroTexto] == palabra[punteroPalabra]) and ((punteroPalabra==0 and enPalabra==true) or (punteroPalabra!=0 and enPalabra==false))) {
        enPalabra=false;
        if (palabra[punteroPalabra+1] == '\0' && texto[punteroTexto+1] == ' ' or texto[punteroTexto+1] == '\0') cantEncontrados++;
        contarPalabra(texto, palabra,punteroTexto+1,punteroPalabra+1,cantEncontrados,enPalabra);
    }else {
        if (texto[punteroTexto]==' ') {enPalabra=true;}else{enPalabra=false;}
        contarPalabra(texto, palabra,punteroTexto+1,0,cantEncontrados,enPalabra);
    }
}

int main() {
    char texto[]="HOLA ", palabra[]="hola";
    int cantEncontrados=0;
    contarPalabra(texto, palabra,0,0,cantEncontrados,true);
    cout<<"La cantidad de veces que se encontro la palabra en el texto es: "<<cantEncontrados<<endl;
    return 0;
}
