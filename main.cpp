//Cálculo de Área de um triângulo.
//AUTOR: Yanky Jhonatha Monteiro Fonte Boa
#include <iostream>

using namespace std;
double a,b,A;
int main()
{
    setlocale(LC_ALL,"Portuguese");
//Área de um Triângulo = Área da Base * Altura / 2

cout << "Informe o valor da área da base do triângulo: ";
    cin >> a;
cout << "Informe a altura do triângulo: ";
    cin >> b;
if(b==0){
    cout << "Impossível dividir por 0.";
}
else{
        A = (a*b)/2;
        cout << "A área da base do triângulo é: " << A;
    }
    return 0;
}
