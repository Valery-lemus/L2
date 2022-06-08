#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Maximus Oliva Duarte / "; libros[0][2] = "Algoritmos y Programacion (Guia para docentes)";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Hipolito Galeas / ";  libros[1][2] = "Apuntes de Algoritmos y Estructuras de Datos";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Gina Milla Mejia / "; libros[2][2] = "Breves Notas sobre Analisis de Algoritmos";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Gerald A. Lemus, Julieth Castillo / "; libros[3][2] = "Fundamentos de Informatica y Programacion";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Maria Roxana Duarte / "; libros[4][2] = "Temas selectos de estructuras de datos";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Jessica Murphi / "; libros[5][2] = "Teoria sintactico-gramatical de objetos";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Rodrigo Rodrigo/ "; libros[6][2] = "Apuntes de Base de Datos 1";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Jassiel Rivera / "; libros[7][2] = "Base de Datos (2005)";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Tania Pacheco Ruiz / "; libros[8][2] = "Base de Datos (2011)";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Mateo Lopez / "; libros[9][2] = "Base de Datos Avanzadas (2013)";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Bladimir Reyes Reyes /"; libros[10][2] = "Diseno Conceptual de Bases de Datos";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Francisca Chacon / "; libros[11][2] = "Breves Notas sobre Automatas y Lenguajes";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Francisca Chacon / "; libros[12][2] = "Breves Notas sobre Teoria de la Computacion";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Mario B. Orellana / ";libros[13][2] = "Compendio de Ingenieria del Software";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Carlos Ble, Suzie Cabrera, Ortega Jonnhson / "; libros[14][2] = "Diseno agil con TDD";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Alejandro  Ayala / "; libros[15][2] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Carmen Santos / "; libros[16][2] = "Scrum & Extreme Programming (para programadores)";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Fabiola Hernandez / "; libros[17][2] = "Scrum y XP desde las trincheras";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "Jonathan Fidel Palma / "; libros[18][2] = "97 cosas que todo programador deberia saber";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Alexander Lemus / "; libros[19][2] = "Docker";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "Sara Turcios / "; libros[20][2] = "El camino a un mejor programador";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Juliette Mejia / "; libros[21][2] = "Introduccion a Docker";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Gerardo J. Flores / "; libros[22][2] = "Programacion de videojuegos SDL";
	libros[23][0] = "PHP"; libros[23][1] = "Carlos Guardado, Mario Cruz / "; libros[23][2] = "Manual de estudio introductorio al lenguaje PHP procedural";
	libros[24][0] = "PHP"; libros[24][1] = "Lazaro Fuentes / "; libros[24][2] = "PHP y Programacion orientada a objetos";
	libros[25][0] = "PHP"; libros[25][1] = "Lazaro Fuentes / "; libros[25][2] = "POO y MVC en PHP";
	libros[26][0] = "PHP"; libros[26][1] = "Franchesca Lopez, Bryan Bermudez, Cruz Cruz /"; libros[26][2] = "Silex, el manual oficial";
	libros[27][0] = "PHP"; libros[27][1] = "Valerie A. Lemus /"; libros[27][2] = "Symfony 1.4, la guia definitiva";
	libros[28][0] = "PHP"; libros[28][1] = "Ryan Ayala, Emerita Ebanks / "; libros[28][2] = "Symfony 2.4, el libro oficial";
	libros[29][0] = "Python"; libros[29][1] = "Allen Downey,Jeffrey Elkner,Chris Meyers / "; libros[29][2] = "Aprenda a pensar como un programador (con Python)";
	libros[30][0] = "Python"; libros[30][1] = "Jason Rodriguez / ";libros[30][2] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";
	libros[31][0] = "Python"; libros[31][1] = "Ethelvina Ride / "; libros[31][2] = "Inmersion en Python";
	libros[32][0] = "Python"; libros[32][1] = "Ethelvina Ride / ";libros[32][2] = "Inmersion en Python 3";
	libros[33][0] = "Python"; libros[33][1] = "Sean Scott Vargas / ";libros[33][2] = "Introduccion a la programacion con Python";
	libros[34][0] = "Python"; libros[34][1] = "Fallon Carringto / ";libros[34][2] = "Introduccion a Programando con Python";
	libros[35][0] = "Python"; libros[35][1] = "Angel Miguel, Florian Turcios / ";libros[35][2] = "Python instantaneo (1999)";
	libros[36][0] = "Python"; libros[36][1] = "Roger Suarez Portillo / ";libros[36][2] = "Python para ciencia e ingenieria";
	libros[37][0] = "Python"; libros[37][1] = "Katerine Palacios / ";libros[37][2] = "Python para principiantes";
	libros[38][0] = "Python"; libros[38][1] = "Mia Villasol / ";libros[38][2] = "Python para todos";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "------Biblioteca-------"<< endl;
        cout << "Ingrese el nombre del autor o la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
             string autor = libros[i][1];
            string libro = libros[i][2];
            string autorEnminuscula = autor;
            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar por autor
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            

            if (autorEnminuscula.find(buscar) != string::npos || libroEnminuscula.find(buscar) != string::npos) {
                cout << endl;
                cout << "Libro encontrado: " << autor << libro << endl << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1]<< libros[sugerencia1][2]<< endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1]<< libros[sugerencia2][2]<< endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1]<< libros[sugerencia3][2]<<endl;
                cout << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}