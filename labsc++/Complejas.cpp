#include <iostream>
using namespace std;

int main()
{
    float total_compras;
    char es_miembro_vip;

    //Solicitar al usuario// Solicitar al usuario que ingrese el total de compras
    cout << "Ingrese el total de compras: ";
    cin >> total_compras;

    // Solicitar al usuario que indique si es miembro VIP
    cout << "¿Es miembro VIP? (S/N): ";
    cin >> es_miembro_vip;

    // Convertir la respuesta a minúsculas para facilitar la comparación
    es_miembro_vip = tolower(es_miembro_vip);

    // Aplicar las condiciones del problema utilizando una estructura de selección doble
    if (total_compras >= 150 || es_miembro_vip == 's') {
        cout << "Descuento aplicado" << endl;
    } else {
        cout << "Sin descuento aplicado" << endl;
    }

    return 0;
}   
