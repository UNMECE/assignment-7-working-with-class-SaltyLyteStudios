#include <iostream>
#include <cmath>

//Electric Field Class
class Electric_Field
{
    // Field Vector
  private:
    double *E;
  public:
    //initialize field and set up default vector values
    Electric_Field ()
    {
        E = (double*)malloc(sizeof(double)*3);
        this-> E[0] = 0;
        this-> E[1] = 0;
        this-> E[2] = 0;
    }

    ~Electric_Field ()
    {

        free(E);
        std::cout<< "destroyed Electric field" <<std::endl;

    }
    //set individual vector values
    void setx (double x)
    {
        this->E[0] = x;
    }
    void sety (double y)
    {
        this->E[1] = y;
    }
    void setz (double z)
    {
        this->E[2] = z;
    }

    //get individual vector values
    double getx ()
    {
        return E[0];
    }
    double gety ()
    {
        return E[1];
    }
    double getz ()
    {
        return E[2];
    }

    //calculate the magnitude of the field vector and return it
    double calculateMagnitude ()
    {
        return(sqrt((E[0]*E[0]) + (E[1]*E[1]) + (E[2]*E[2])));
    }

    //set all vector components simultaneously
    void E_components (double x, double y, double z)
    {
        setx(x);
        sety(y);
        setz(z);

    }

    //calculate the inner product of the electric field with itself
    double innerProduct ()
    {
        return (E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
    }

    //print the inner product of the field to the console
    void printInnerProduct()
    {
        std::cout<<"Inner Product of electric field vector: " <<innerProduct() <<std::endl;
    }
};

//magnetic field class
class Magnetic_Field
{
    //magnetic field vector
  private:
    double *M;
  public:
    //initialize the field vector and set up its components to default values
    Magnetic_Field ()
    {
        M = (double*)malloc(sizeof(double)*3);
        this-> M[0] = 0;
        this-> M[1] = 0;
        this-> M[2] = 0;
    }
    
    ~Magnetic_Field ()
    {

        free(M);
        std::cout<< "destroyed Magnetic field" <<std::endl;

    }

    //set field components individually
    void setx (double x)
    {
        this->M[0] = x;
    }
    void sety (double y)
    {
        this->M[1] = y;
    }
    void setz (double z)
    {
        this->M[2] = z;
    }

    //get field components individually
    double getx ()
    {
        return M[0];
    }
    double gety ()
    {
        return M[1];
    }
    double getz ()
    {
        return M[2];
    }

    //calculate the magnitude of the magnetic field vector
    double calculateMagnitude ()
    {
        return(sqrt((M[0]*M[0]) + (M[1]*M[1]) + (M[2]*M[2])));
    }

    //set the components of the field simultaneously
    void M_components (double x, double y, double z)
    {
        setx(x);
        sety(y);
        setz(z);

    }

    //calculate the unit vector of the field and return it
    double* unitVector()
    {
        double* unitVec = (double*)malloc(sizeof(double)*3); 
        double mag = calculateMagnitude();

        unitVec[0] = M[0]/mag;
        unitVec[1] = M[1]/mag;
        unitVec[2] = M[2]/mag;

        return unitVec;
    }

    //print the unit vector of the field to the console
    void printUnitVector()
    {
        double* unitVec = unitVector();
        std::cout << "unit vector of Magnetic Field vector: (" << unitVec[0] << "," << unitVec[1] << "," << unitVec[2] <<")" <<std::endl;
    }
};
