// proyecto final sergio gustavo solis gutierrez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include "iomanip"
#include <conio.h> 

using namespace std;


class Figura
{
public:
    int l;
    int X;
    int Y;

};

class Cuadrado : public Figura
{
public:
    int llenoVacio;
    void dibujarCuadrado(int, int, int, int);

};

class Triangulo : public Figura
{
public:

    void dibujarTriangulo(int, int, int);
};

class Rectangulo : public Figura
{
public:
    int ancho;
    void dibujarRectangulo(int, int, int, int);
};

class Menu
{
public:
    int entrada;
    void iniciarMenu();
};


Menu objetoMenu;
Cuadrado objetoCuadrado;
Triangulo objetoTriangulo;
Rectangulo objetoRectangulo;

int main()
{

    for (size_t i = 0; i < 100000000; i++)
    {
        objetoMenu.iniciarMenu();
    }


}

void Menu::iniciarMenu()
{


    system("cls");
    
    cout << "Que figura desea dibujar? " << endl << "1-Cuadrado" << endl << "2-Triangulo" << endl << "3-Rectangulo" << endl ;
    cin >> entrada;

    if (entrada == 1)
    {
        system("cls");
        cout << "Ingrese el lado del cuadrado" << endl;
        cin >> objetoCuadrado.l;

        system("cls");
        cout << "1-Vacio" << endl << "2-Lleno" << endl;
        cin >> objetoCuadrado.llenoVacio;

        system("cls");
        cout << "En que posicion X quiere que lo ponga?" << endl;
        cin >> objetoCuadrado.X;

        system("cls");
        cout << "En que corrdenada Y quiere que lo ponga?" << endl;
        cin >> objetoCuadrado.Y;


        objetoCuadrado.dibujarCuadrado(objetoCuadrado.l, objetoCuadrado.llenoVacio, objetoCuadrado.X, objetoCuadrado.Y);

    }

    if (entrada == 2)
    {
        system("cls");
        cout << "Ingrese largo del Triangulo" << endl;
        cin >> objetoTriangulo.l;

        system("cls");
        cout << "En que posicion X quiere que lo ponga?" << endl;
        cin >> objetoTriangulo.X;

        system("cls");
        cout << "En que corrdenada Y quiere que lo ponga?" << endl;
        cin >> objetoTriangulo.Y;


        objetoTriangulo.dibujarTriangulo(objetoTriangulo.l, objetoTriangulo.X, objetoTriangulo.Y);

    }
    if (entrada == 3)
    {
        system("cls");
        cout << "Ingrese el largo del Rectangulo" << endl;
        cin >> objetoRectangulo.l;

        system("cls");
        cout << "Ingrese el ancho del Rectangulo" << endl;
        cin >> objetoRectangulo.ancho;

        system("cls");
        cout << "En que corrdenada X quiere que lo ponga?" << endl;
        cin >> objetoRectangulo.X;

        system("cls");
        cout << "En que corrdenada Y quiere que lo ponga?" << endl;
        cin >> objetoRectangulo.Y;


        objetoRectangulo.dibujarRectangulo(objetoRectangulo.l, objetoRectangulo.ancho, objetoRectangulo.X, objetoRectangulo.Y);

    }





    }
    


void Cuadrado::dibujarCuadrado(int l, int llenoVacio, int X, int Y)
{
    for (size_t i = 0; i < 10000000; i++)
    {

        system("cls");


        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }

        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }


        if (llenoVacio == 1)
        {
            for (size_t a = 0; a < l + Y; a++)
            {
                if (a < Y)
                {
                    cout << "    ";
                }
                else
                {
                    for (size_t b = 0; b < l + X; b++)
                    {
                        if (b < X)
                        {
                            cout << "   ";
                        }
                        else if (b > X && b != X && a != Y && b != X + l - 1 && a != Y + l - 1 && a > Y)
                        {

                            cout << "   ";
                        }
                        else cout << " * ";

                    }
                }
                cout << endl;
            }
        }

        if (llenoVacio == 2)
        {

            for (size_t i = 0; i < l + Y; i++)
            {
                if (i < Y)
                {
                    cout << "   ";
                }
                else
                {
                    for (size_t i = 0; i < l + X; i++)
                    {
                        if (i < X)
                        {
                            cout << "   ";
                        }
                        else cout << " * ";

                    }
                }

                cout << endl;
            }

        }

        for (size_t i = 0; i < 10000000; i++)
        {

            char tecla = _getch();
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoCuadrado.dibujarCuadrado(l, llenoVacio, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoCuadrado.dibujarCuadrado(l, llenoVacio, X, Y);
            }
            if (tecla == 'D' || tecla == 'd')
            {
                X = X + 1;
                objetoCuadrado.dibujarCuadrado(l, llenoVacio, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {
                Y = Y - 1;
                objetoCuadrado.dibujarCuadrado(l, llenoVacio, X, Y);
            }

            if (tecla == 'L' || tecla == 'l')
            {

                objetoMenu.iniciarMenu();
            }
        }

    }

}

void Triangulo::dibujarTriangulo(int l, int X, int Y)
{

    int contador = 0;
    for (size_t i = 0; i < 10000000; i++)
    {

        system("cls");


        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }
        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }
        contador = 0;

        for (size_t a = 0; a < l + Y; a++)
        {
            if (a < Y)
            {
                cout << "    ";
            }
            else
            {
                for (size_t b = 0; b < l + X; b++)
                {
                    if (b < X)
                    {
                        cout << "   ";
                    }
                    else if (b > X + contador)
                    {
                        cout << "  ";
                    }
                    else
                        cout << " * ";

                }
                contador = contador + 1;
            }
            if (contador >= l)
            {
                contador == l;
            }
            cout << endl;
        }


        for (size_t i = 0; i < 10000000; i++)
        {

            char tecla = _getch();
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoTriangulo.dibujarTriangulo(l, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoTriangulo.dibujarTriangulo(l, X, Y);
            }
            if (tecla == 'D' || tecla == 'd')
            {
                X = X + 1;
                objetoTriangulo.dibujarTriangulo(l, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {
                Y = Y - 1;
                objetoTriangulo.dibujarTriangulo(l, X, Y);
            }

            if (tecla == 'L' || tecla == 'l')
            {

                objetoMenu.iniciarMenu();
            }
        }

    }

}

void Rectangulo::dibujarRectangulo(int l, int ancho, int X, int Y)
{
    for (size_t i = 0; i < 10000000; i++)
    {

        system("cls");


        if (X < 0)
        {
            X = 0;
        }

        if (Y < 0)
        {
            Y = 0;
        }

        if (X > 30)
        {
            X = 30;
        }

        if (Y > 20)
        {
            Y = 20;
        }


        for (size_t i = 0; i < ancho + Y; i++)
        {
            if (i < Y)
            {
                cout << "   ";
            }
            else
            {
                for (size_t i = 0; i < l + X; i++)
                {
                    if (i < X)
                    {
                        cout << "   ";
                    }
                    else cout << " * ";

                }
            }

            cout << endl;
        }



        for (size_t i = 0; i < 10000000; i++)
        {

            char tecla = _getch();
            if (tecla == 'A' || tecla == 'a')
            {
                X = X - 1;
                objetoRectangulo.dibujarRectangulo(l, ancho, X, Y);
            }
            if (tecla == 'S' || tecla == 's')
            {
                Y = Y + 1;
                objetoRectangulo.dibujarRectangulo(l, ancho, X, Y);
            }
            if (tecla == 'D' || tecla == 'd')
            {
                X = X + 1;
                objetoRectangulo.dibujarRectangulo(l, ancho, X, Y);
            }
            if (tecla == 'W' || tecla == 'w')
            {
                Y = Y - 1;
                objetoRectangulo.dibujarRectangulo(l, ancho, X, Y);
            }

            if (tecla == 'L' || tecla == 'l')
            {
                objetoMenu.iniciarMenu();
            }
        }

    }

}