#include <iostream>
using namespace std;
class Perro
{
    // access specifier
    public:

         // data members
        string name;
        int edad;

        // menber funcions()
        void printname()
        {
            cout << "mi nombre es: " << name << endl;
        }

        void decirEdad()
        {
            cout << "wufff mi edad es: " << edad<< endl;
        }
        void decirEdadCanina()
        {
            cout << "wuff mi edad canina: "<< edad *7 << endl;
        }
};
int main() {

    Perro isabelle;
    isabelle.name = "isabelle";
    isabelle.edad = 5;
    isabelle.decirEdadCanina();
    // call printname()
    isabelle.printname();
    isabelle.decirEdad();
    cout << endl;

    Perro mimo;
    mimo.name = "mimo";
    mimo.edad = 6;

    // call printname()
    mimo.printname();
    mimo.decirEdad();
    cout << endl;

    return 0;
}