#include <iostream>

using namespace std;
//sirve para hallar el maximo comun divisor de 2 numeros;

int euclides(int a, int b){
    if(a % b == 0){
        cout<<b;
        return b, 0, 1;
    }
    else
        return euclides(b, a%b);
}


int logical(int a, int b, int &x, int &y){
    if(a % b == 0){       //El caso mas simple, cuando el residuo sea 0
        x = 0, y = 1;
        return b;
    }

    int x1, y1;
    int gcd = logical(b%a,a, x1, y1);
    x = y1 - (b/a) * x1;   y = x1;
 
    return gcd;
}


void euclidesExtended(int a, int b){
    int x,y;
    int resultado = logical(a,b,x,y);

    cout << "residuo: " << resultado << "    "<< "x: " <<x<< "    y: " <<y<<endl;
}

int main(){
    int num1, num2;         //1914, 899
    cout<<"Escribe el primer numero: ";
    cin>>num1;
    cout<<"Escribe el segundo numero: ";
    cin>>num2;
    euclidesExtended(num1, num2);

    return 0;
}

