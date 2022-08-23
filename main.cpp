/*
TALLER MATRICES CON EIGEN
Autor: Oscar Eduardo Miranda Puentes
Fecha: 21 Agosto 2022
Materia: Introducción a HPC
*/
#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main()
{
    //Se declaran las dos matrices a operar.
    Eigen::Matrix2d a;
    a << 4, -2,
         1, -7;
    Eigen::Matrix2d b;
    b << -1, 2,
         6, -5;
   //Se imprime el resltado de la operación solicidada por el ejercicio.
    cout << "EJERCICIO #1: \n";
    cout << "3A - 4B = \n" << (a*3) - (b*4) <<endl;
    cout << " " <<endl;
/********************************************************************/

//Se declaran las dos matrices a operar.
    Eigen::Matrix2d a1;
    a1 << 0, -1,
         2, 1;
    Eigen::Matrix2d b1;
    b1<< 1, 2,
         3, 4;
//Se imprime el resltado de la operación solicidada por el ejercicio.
    cout << "EJERCICIO #2: \n";
    cout << "(3BA -4A)/2 = \n" << ((b1*a1*3) - (4*a1))/2 <<endl;
    cout << " " <<endl;

/*********************************************************************/

 //Se declaran las tres matrices a operar.
        Eigen::Matrix2d a3;
        a3<< -3, -2,
             3, 3;
        Eigen::Matrix2d b3;
        b3 << 5, 3,
             9, 4;
        Eigen::Matrix2d c3;
        c3 << 1, 1,
             0, 0;
//Se requiere realizar las operaciones por separado para cumplir con la división final//
// Se multiplica la matriz A por la B transpuesta
Eigen::Matrix2d resultado1 = a3*b3.transpose();
// Se realiza la inversa de la multiplicacion anterior
Eigen::Matrix2d aux1 = resultado1.inverse();
// Se multiplica la inversa por la matriz C para cumplir con la operación
Eigen::Matrix2d resultado2 = c3*aux1;


cout << "EJERCICIO #3: \n";
cout << "C/(A*B^T)= \n" << resultado2 <<endl;
cout << " " <<endl;


/***********************************************************/
//Se declaran las dos matrices a operar.
Eigen::Matrix2d a4;
a4<< 2, 1,
     -4, -3;
Eigen::Matrix2d b4;
b4 << 2,2,
      6, 4;
//Se haya la inversa de la matriz A y se multiplica esta por la matriz B
Eigen::Matrix2d aux = a4.inverse();
cout << "EJERCICIO #4: \n";
cout << "B/A= \n" << b4*aux<<endl;
cout << " " <<endl;

/***********************************************************/
//Se declaran las tres matrices a operar.
Eigen::MatrixXf a5(2,3);
a5<< 3, 0, -1,
     0, 2, 1;
Eigen::MatrixXf b5(3,2);
b5 << 1,2,
      1,0,
      0,6;
Eigen::MatrixXf c5(2,2);
c5 << -2, 0,
      -2, -5;
//Se separan las operaciones de la general para poder identificar todas la matrices parciales
Eigen::MatrixXf tem = a5*b5;
Eigen::MatrixXf tem1 = c5+tem;
Eigen::MatrixXf tem2 = tem1*2;
cout << "EJERCICIO #5: \n";
cout << "2(AB+C)= \n" << tem2 <<endl;
cout << " " <<endl;

/**************************************************************/

Eigen::Matrix3d a6;
a6<< 1, 5,-1,
     -1, 2,2,
     0, -3, 3;
Eigen::Matrix3d b6;
b6 << -1,-4,3,
       1,-2,-2,
       -3,3,-5;
cout << "EJERCICIO #6: \n";
cout << "A + 3B = \n" << a6 + (3*b6) <<endl;
cout << " " <<endl;


/****************************************************************/

Eigen::Matrix3d a7;
a7<<  2, 7, 3,
      3, 9, 4,
      1, 5, 3;

Eigen::Matrix3d b7;
b7<<  1, 0, 2,
      0, 1, 0,
      0, 0, 1;

Eigen::Matrix3d aux7 = a7.inverse();


cout << "EJERCICIO #7: \n";
cout << "B/A = \n" << b7*aux7 <<endl;
cout << " " <<endl;

/************************************************************************/

Eigen::Matrix3d a8;
a8<<  1, 1, 1,
      6, 5, 4,
      13, 10, 8;

Eigen::Matrix3d b8;
b8<<  0, 1, 2,
      1, 0, 2,
      1, 2, 0;

Eigen::Matrix3d aux8 = a8.inverse();
Eigen::Matrix3d resultado8 = aux8*b8;

cout << "EJERCICIO #8: \n";
cout << "B/A = \n" << resultado8 <<endl;
cout << " " <<endl;

/**************************************************************************/

Eigen::Matrix2d a9;
a9<<  3, -1,
      0,  2;


Eigen::Matrix2d aux9 = a9.transpose();
Eigen::Matrix2d op1 = aux9 * a9;
Eigen::Matrix2d op2 = op1 - 2*a9;


cout << "EJERCICIO #9: \n";
cout << "B/A = \n" << op2 <<endl;
cout << " " <<endl;

/*************************************************************************/

Eigen::Matrix2d a10;
a10<<  4, 2,
      -1, 0;

Eigen::Matrix2d op3 = a10 * a10;
Eigen::Matrix2d op4 = a10 * op3;


cout << "EJERCICIO #10: \n";
cout << "A³ = \n" << op4 <<endl;
cout << " " <<endl;

/***********************************************************************************/


Eigen::MatrixXd a11(2,3);
a11<<  1, 0, -2,
       2, -1, 3;

Eigen::MatrixXd b11(3,2);
b11<<   2, -3,
        -2, 0,
        -1, -2;

Eigen::MatrixXd ap1 = a11*a11.transpose();
Eigen::MatrixXd ap2 = 2*a11*b11;
Eigen::MatrixXd ap3 =  ap1 - ap2;

cout << "EJERCICIO #11: \n";
cout << "A*A^t - 2AB = \n" << ap3 <<endl;
cout << " " <<endl;

/************************************************************************************/
Eigen::Matrix3d a12;
a12<<  2, 5, 7,
       6, 3, 4,
       5, -2, -3;

Eigen::Matrix3d b12;
b12<< -1, 1, 0,
       0, 1, 1,
       1, 0, -1;

Eigen::Matrix3d m = a12.inverse();
Eigen::Matrix3d div2 = b12 * m;

cout << "EJERCICIO #12: \n";
cout << "B/A = \n" << div2 <<endl;
cout << " " <<endl;

/*****************************************************************************/

Eigen::Matrix4d a13;
a13<<  1, 1, 1, 1,
       1, 1, -1, -1,
       1, -1, 1, -1,
       1, -1, -1, 1;

Eigen::Matrix4d b13;
b13<<  1, 1, 0, 0,
       1, 0, 1, 0,
       1, 0, 0, 1,
       1, 0, 1, 1;

Eigen::Matrix4d mA = a13.inverse();
Eigen::Matrix4d div3 = mA * b13;

cout << "EJERCICIO #13: \n";
cout << "B/A = \n" << div3 <<endl;
cout << " " <<endl;

/*************************************************************************/

Eigen::Matrix2d a14;
a14<<  2,4,
       3,2;
Eigen::Matrix2d b14;
b14<< 1,0,
      2,1;
Eigen::Matrix2d c14;
c14<< 7,5,
      6,1;

Eigen::Matrix2d o1 = a14.transpose();
Eigen::Matrix2d o2 = o1*b14;
Eigen::Matrix2d o3 = o2.inverse();
Eigen::Matrix2d o4 = o3*c14;

cout << "EJERCICIO #14: \n";
cout << "C/A^T*B= \n" << o4 <<endl;

cout << " " <<endl;

/****************************************************************************/
Eigen::MatrixXd a15(1,3);
a15<< 4, 8, 12;
Eigen::MatrixXd b15(3,2);
b15<< 3,2,
      0,1,
     -1,0;
Eigen::MatrixXd c15(2,1);
c15 << 3,
      -1;
Eigen::MatrixXd p1 = a15*b15;
Eigen::MatrixXd p2 = p1*c15;

cout << "EJERCICIO #15: \n";
cout << "A*B*C=  \n" << p2 <<endl;

return 0;
}
/*************************************************************************************


⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⠀⠀⠀⢀⡤⠤⠤⣄⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠤⢴⣴⠒⠉⠹⣴⣏⠀⠀⠀⡀⠈⢇⠀⠀⣼⠀⠀⠀⠘⣶⠇⠀⢨⢃⡾⠓⠲⢤⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣀⠤⠔⠒⠙⣯⣇⠀⠈⣿⣇⠀⠀⣿⣿⣿⠀⠀⣷⠀⠘⡄⠀⣿⠀⠀⠀⠀⢹⠀⠀⢸⡏⠇⠀⢀⠇⣀⠤⠒⠒⠤⣄
⢰⡖⠉⠀⠀⠀⠀⣀⣸⣿⠀⠀⠉⠉⠀⠀⢸⠁⣿⠀⠈⠉⠁⠀⢱⠀⣿⠀⠀⣦⠀⠀⠀⠀⣿⡸⠀⠀⠘⠉⠀⠀⣀⣤⣴⠟
⢼⢣⣀⣴⡀⠀⠘⡿⠏⠗⡆⠀⠠⣶⡆⠀⠸⡄⡏⠀⠀⣶⣷⠀⠀⢧⣿⠀⠀⣿⡆⠀⠀⢸⣿⠃⠀⢰⡄⠀⠐⡿⠛⠋⠀⠀
⠘⢿⡿⢿⣧⠀⠀⢳⠀⢸⠸⠀⠀⢹⣧⢀⣀⣷⣧⣤⣤⠛⣏⣦⣤⣾⣿⢦⣤⣿⢸⣄⣀⣼⡏⠀⢠⡟⡇⠀⠀⡇⠀⠀⠀⠀
⠀⠀⠀⠀⢏⢇⠀⠀⣣⠀⣆⣷⣶⣿⣿⡿⠿⠿⢷⡿⠟⣠⠟⠋⠛⢿⡛⠛⠿⡼⠿⠿⢿⣿⣿⣶⠞⡅⢸⠀⠀⢸⠀⠀⠀⠀
⠀⠀⠀⠀⠘⣾⣿⣿⠇⢠⣟⠉⠙⠷⡿⠀⠀⠀⢸⢀⡼⠁⠀⣀⠀⠀⠹⡄⡼⡇⠀⠀⡜⣸⡏⠙⠢⣧⣾⣦⣀⢸⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠀⠀⠀⢿⣿⣷⣦⡀⠀⠀⠀⠀⣇⡾⠀⠀⣼⣿⢷⠀⠀⢻⢱⠀⠀⢀⣿⡿⠀⠀⢠⠋⢻⡿⠿⣏⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣿⣿⠆⠀⠀⢸⡏⡇⠀⠀⡏⡟⡟⠀⠀⢸⡸⠀⠀⢸⣿⠃⠀⠀⡜⡰⢩⠃⠀⠈⣱⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⢹⠀⠀⠀⢸⠀⡇⠀⠀⠙⠋⠀⠀⢀⡏⡇⠀⠀⠘⠋⠀⠀⣰⣱⢣⠇⠀⠀⣰⠃⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⡎⠀⠀⠀⡏⣿⣧⡀⠀⠀⠀⠀⢀⣾⣷⡇⠀⠀⠀⠀⠀⢠⣯⣧⣾⣦⣄⣰⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⣧⣤⣶⣶⠃⠘⢿⣿⣷⣶⣶⣾⠟⠉⣿⣿⣦⣄⣀⣠⣴⢏⣽⠋⠉⠙⢿⠁⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠛⠋⠁⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀⠈⠛⠻⠿⠟⠋⠁⣿⣿⣦⣀⣀⡼⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠛⠛⠁⠀
⠸⣷⣦⠤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⠀⠀⠀
⠀⠙⣿⡄⠈⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠔⠊⠉⣿⡿⠁⠀⠀⠀
⠀⠀⠈⠣⡀⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠊⠁⠀⠀⣰⠟⠀⠀⠀⣀⣀
⠀⠀⠀⠀⠈⠢⣄⠀⡈⠒⠊⠉⠁⠀⠈⠉⠑⠚⠀⠀⣀⠔⢊⣠⠤⠒⠊⠉⠀⡜
⠀⠀⠀⠀⠀⠀⠀⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠩⡔⠊⠁⠀⠀⠀⠀⠀⠀⠇
⠀⠀⠀⠀⠀⠀⠀⡇⢠⡤⢄⠀⠀⠀⠀⠀⡠⢤⣄⠀⡇⠀⠀⠀⠀⠀⠀⠀⢰⠀
⠀⠀⠀⠀⠀⠀⢀⠇⠹⠿⠟⠀⠀⠤⠀⠀⠻⠿⠟⠀⣇⠀⠀⡀⠠⠄⠒⠊⠁⠀
⠀⠀⠀⠀⠀⠀⢸⣿⣿⡆⠀⠰⠤⠖⠦⠴⠀⢀⣶⣿⣿⠀⠙⢄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢻⣿⠃⠀⠀⠀⠀⠀⠀⠀⠈⠿⡿⠛⢄⠀⠀⠱⣄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⠈⠓⠦⠀⣀⣀⣀⠀⡠⠴⠊⠹⡞⣁⠤⠒⠉⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣠⠃⠀⠀⠀⠀⡌⠉⠉⡤⠀⠀⠀⠀⢻⠿⠆⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠰⠁⡀⠀⠀⠀⠀⢸⠀⢰⠃⠀⠀⠀⢠⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢶⣗⠧⡀⢳⠀⠀⠀⠀⢸⣀⣸⠀⠀⠀⢀⡜⠀⣸⢤⣶⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠈⠻⣿⣦⣈⣧⡀⠀⠀⢸⣿⣿⠀⠀⢀⣼⡀⣨⣿⡿⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠻⠿⠿⠓⠄⠤⠘⠉⠙⠤⢀⠾⠿⣿⠟⠋

*************************************************************************************/

