#include <bits/stdc++.h>

/*
10 6 14 12 8 16
compara con el anterior
      10
     /  \
    /    \
   /      \
  6       14
 / \     /  \
0   8   12  16

    10
   /  \
  /    \
 /      \
6       14
 \     /  \
  8   12  16
*/

#include "binarytree.hpp"

int main(int argc, char const *argv[])
{
    binarytree::Node<int> *node = NULL;
    int choice = 1;

    while (choice)
    {
        std::cout << "Escribi un numero para seleccionar una opcion:" << std::endl;
        std::cout << "1. Insertar Nodo" << std::endl;
        std::cout << "2. Mostrar arbol verticalmente" << std::endl;
        std::cout << "3. Mostrar arbol horizontalmente" << std::endl;
        std::cout << "4. Mostrar valores ordenados de menor a mayor" << std::endl;
        std::cout << "5. Mostrar valores ordenados de mayor a menor" << std::endl;
        std::cout << "6. Buscar si cierto valor existe dentro del arbol" << std::endl;
        std::cout << "0. Salir" << std::endl;

        std::cin >> choice;

        if (choice == 1)
        {
            int a;
            std::cout << "Ingrese nodo: ";
            std::cin >> a;
            while (a > 0)
            {
                binarytree::addNode(node, a);

                std::cout << "Ingrese nodo: ";
                std::cin >> a;
            }
        }
        else
        {
            std::cout << std::endl;

            if (choice == 2)
                binarytree::printTreeV(node);
            else if (choice == 3)
                binarytree::printTreeH(node, 0);
            else if (choice == 4)
                binarytree::print(node);
            else if (choice == 5)
                binarytree::printReversed(node);
            else if (choice == 6)
            {
                int a;
                std::cout << "Ingrese valor para buscar: ";
                std::cin >> a;

                if (binarytree::search(node, a))
                    std::cout << "El nodo existe dentro del arbol";
                else
                    std::cout << "El nodo no existe dentro del arbol";
            }
            else if (choice == 7)
                break;

            std::cout << std::endl;
            std::cout << std::endl;
        }
    }

    return 0;
}
