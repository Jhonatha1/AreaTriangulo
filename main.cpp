//C�lculo de �rea de um tri�ngulo.
//AUTOR: Yanky Jhonatha Monteiro Fonte Boa
#include <iostream>

using namespace std;
double a,b,A;
int main()
{
    setlocale(LC_ALL,"Portuguese");
//�rea de um Tri�ngulo = �rea da Base * Altura / 2

cout << "Informe o valor da �rea da base do tri�ngulo: ";
    cin >> a;
cout << "Informe a altura do tri�ngulo: ";
    cin >> b;
if(b==0){
    cout << "Imposs�vel dividir por 0.";
}
else{
        A = (a*b)/2;
        cout << "A �rea da base do tri�ngulo �: " << A;
    }
    return 0;
}
