#include <iostream>
#include <string>
using namespace std;

  /* Dado un laberinto en donde se ubica un queso,
        retorna en una lista de pares ordenados (x,y)
        que indican el camino desde una posición inicial
        (i,j) hasta la posición en que se encuentra el
        queso.
        Entradas:
             (i, j) : posición inicial a partir de donde
                      se realizará la búsqueda de un camino
                      hasta la posición del queso.
        Salidas:
             Lista con las casillas, expresadas como pares
             ordenados, que llevan desde la posición inicial
             hasta la posición en que se encuentra el queso.
             Si no existe un camino retorna la lista vacía.
    */
/*int main( int argc, char *argv[ ], char *envp[ ] ){
 cout << "hola mundo";

 return 0;

  }*/
    int main() {
<<<<<<< HEAD
<<<<<<< HEAD
        cout <<"Bienvenidos al laberinto"<<endl;
        cout <<"Dado un laberinto en donde se ubica un queso, retorna en una lista de"<<endl;
        cout <<"pares ordenados (x,y) que indican el camino desde una posición inicial(i,j) "<<endl;
        cout <<"hasta la posición en que se encuentra elqueso."<<endl;
        cout <<"Entradas: (i, j) : posición inicial a partir de donde se realizará la"<<endl;
        cout <<"búsqueda de un camino hasta la posición del queso."<<endl;
=======
=======
        i
>>>>>>> 8129718dad279f8ab07900d3eebadfbf2d9f5495
	    cout << "Realizando actualizaciones al código...."
        cout << "Integrantes:"
        cout << "Christian Soledispa";
        cout << "Josue Singaña\n";
        cout << "Diana Katherine Almeida A."
>>>>>>> 9492afb609df1beabf80500222dae7ab14a8813f

    int a[] = {3,4,2,1,5};
    int i, dato;
    char band = 'F'
    


    if laberinto[i][j] == 3:
        return [(i, j)]

    if laberinto[i][j] == 1:
        return []

    laberinto[i][j] = -1

    if i > 0 and laberinto[i - 1][j] in [0, 3]:                     # Norte
        camino = recorrido(i - 1, j)
        if camino: return [(i, j)] + camino

    if j < len(laberinto[i]) - 1 and laberinto[i][j + 1] in [0, 3]: # Este
        camino = recorrido(i, j + 1)
        if camino: return [(i, j)] + camino

    if i < len(laberinto) - 1 and laberinto[i + 1][j] in [0, 3]:    # Sur
        camino = recorrido(i + 1, j)
        if camino: return [(i, j)] + camino

    if j > 0 and laberinto[i][j - 1] in [0, 3]:                     # Oeste
        camino = recorrido(i, j - 1)
        if camino: return [(i, j)] + camino

    return []

for x in recorrido(6,13) : print(x)

print("Pokemon")
cout<<"Cristiano Ronaldo rechazó a coca cola";
}
