#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    
    //variable booleana
    bool bucle = true;
    
    
    
    // variables para sección autos
    int acum = 0;
    int vehiculo,tiempo,num_vehiculo = 0, mem_tiempo = 0,mem_num_vehiculo;
    string nombre_y_apellido;
    string escuderia;
    string mem_nombre_y_apellido;
    string mem_escuderia;
    
    //variables para sección camiones
    int acum1 = 0;
    int tiempo1,num_vehiculo1 = 0;
    int mem_tiempo1 = 0,mem_num_vehiculo1;
    string nombre_y_apellido1;
    string escuderia1;
    string mem_nombre_y_apellido1;
    string mem_escuderia1;   
    
    //variables para sección motos
    int acum2 = 0;
    int tiempo2,num_vehiculo2 = 0;
    int mem_tiempo2 = 0,mem_num_vehiculo2;
    string nombre_y_apellido2;
    string escuderia2;
    string mem_nombre_y_apellido2;
    string mem_escuderia2;
    
    cout << "Rally Paris-Dakar" << endl;
    cout << "ingrese datos del competidor" << endl;
    cout << "1=auto, " "2=camion, " "3=moto" << endl;
    while (bucle == true)
    {
        cout << "ingrese tipo de vehiculo" << endl;
        cin >> vehiculo;
        switch (vehiculo)
        {
            case 0:
                bucle = false;
                break;
            case 1:
                acum = acum ++;
                cout << "seccion autos" << endl;
                cout << "ingrese numero de vehiculo" << endl;
                cin >> num_vehiculo;
                cout << "Ingrese nombre y apellido del piloto" << endl;
                cin >> nombre_y_apellido;
                cout << "Ingrese nombre de la escuderia" << endl;
                cin >> escuderia;
                cout << "Ingrese tiempo empleado" << endl;
                cin >> tiempo;
                if (tiempo >= mem_tiempo)
                {
                    mem_tiempo = tiempo;
                    mem_num_vehiculo = num_vehiculo;
                    mem_nombre_y_apellido = nombre_y_apellido;
                    mem_escuderia = escuderia;
                }
                break;
            case 2:
                acum1 = acum1 ++;
                cout << "seccion camiones" << endl;
                cout << "ingrese numero de vehiculo" << endl;
                cin >> num_vehiculo1;
                cout << "Ingrese nombre y apellido del piloto" << endl;
                cin >> nombre_y_apellido1;
                cout << "Ingrese nombre de la escuderia" << endl;
                cin >> escuderia1;
                cout << "Ingrese tiempo empleado" << endl;
                cin >> tiempo1;
                if (tiempo1 >= mem_tiempo1)
                {
                    mem_tiempo1 = tiempo1;
                    mem_num_vehiculo1 = num_vehiculo1;
                    mem_nombre_y_apellido1 = nombre_y_apellido1;
                    mem_escuderia = escuderia1;
                }
                break;
            case 3:
                acum2 = acum2 ++;
                cout << "seccion motos" << endl;
                cout << "ingrese numero de vehiculo" << endl;
                cin >> num_vehiculo2;
                cout << "Ingrese nombre y apellido del piloto" << endl;
                cin >> nombre_y_apellido2;
                cout << "Ingrese nombre de la escuderia" << endl;
                cin >> escuderia2;
                cout << "Ingrese tiempo empleado" << endl;
                cin >> tiempo2;
                if (tiempo2 >= mem_tiempo2)
                {
                    mem_tiempo2 = tiempo2;
                    mem_num_vehiculo2 = num_vehiculo2;
                    mem_nombre_y_apellido2 = nombre_y_apellido2;
                    mem_escuderia2 = escuderia2;
                }
                break;
                default: 
                    cout << vehiculo << " no pertenece a ninguna sección registrada" << "\n";
    
        } 
    }
    cout << "seccion autos: de " << acum << " participantes, el ganador es: ";
    cout << " el vehículo numero " << mem_num_vehiculo;
    cout << " con el piloto " << mem_nombre_y_apellido;
    cout << " con la escuderia " << mem_escuderia;
    cout << " en el tiempo " << mem_tiempo << "\n";
    
    cout << "seccion camiones de " << acum1 << " participantes, el ganador es: ";
    cout << " el vehículo numero " << mem_num_vehiculo1;
    cout << " con el piloto " << mem_nombre_y_apellido1;
    cout << " con la escuderia " << mem_escuderia1;
    cout << " en el tiempo " << mem_tiempo1 << "\n";
    
    cout << "seccion motos: de " << acum2 << " participantes, el ganador es: ";
    cout << " el vehículo numero " << mem_num_vehiculo2;
    cout << " con el piloto " << mem_nombre_y_apellido2;
    cout << " con la escuderia " << mem_escuderia2;
    cout << " en el tiempo " << mem_tiempo2 << "\n";
return 0;
}
