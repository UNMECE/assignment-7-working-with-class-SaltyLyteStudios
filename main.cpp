
#include "fieldClasses.h"

int main ()
{
    Electric_Field Efield;
    Magnetic_Field Mfield;

    std::cout<< "\nE_x:"<< Efield.getx() <<std::endl;
    std::cout<< "E_y:"<< Efield.gety() <<std::endl;
    std::cout<< "E_z:"<< Efield.getz() <<std::endl;

    std::cout<< "\nM_x:"<< Mfield.getx() <<std::endl;
    std::cout<< "M_y:"<< Mfield.gety() <<std::endl;
    std::cout<< "M_z:"<< Mfield.getz() <<std::endl;

    Efield.E_components(1.0 ,3.5, 2.4);
    Mfield.M_components(2.3 ,3.1, 5.2);

    std::cout<< "\nx:"<< Efield.getx() <<std::endl;
    std::cout<< "y:"<< Efield.gety() <<std::endl;
    std::cout<< "z:"<< Efield.getz() <<std::endl;

    std::cout<< "\nM_x:"<< Mfield.getx() <<std::endl;
    std::cout<< "M_y:"<< Mfield.gety() <<std::endl;
    std::cout<< "M_z:"<< Mfield.getz() <<std::endl;

    double E_magnitude = Efield.calculateMagnitude();
    double M_magnitude = Mfield.calculateMagnitude();

    std::cout<<"E_magnitude: " << E_magnitude << std::endl;
    std::cout<<"M_magnitude: " << M_magnitude << std::endl;

    Efield.printInnerProduct();

    Mfield.printUnitVector();

    return 0;
}