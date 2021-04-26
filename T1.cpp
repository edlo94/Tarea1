#include <iostream>
using namespace std;

int main(){
    float BMI, Peso, Altura;

    cout<<"INGRESE SU ALTURA EN PULGADAS: "<<endl;
    cin>>Altura;
    cout<<"INGRESE SU PESO EN LB: "<<endl;
    cin>>Peso;

    BMI=(Peso*703)/(Altura*Altura);

    cout<<"SU BMI ES: "<<BMI<<"\n\n\tVALORES DE BMI\nBajo peso: menos de 18.5\nNormal: entre 18.5 y 24.9\nSobrepeso entre 25 y 29.9\nObeso: 30 o mas"<<endl;
    return 0;

}