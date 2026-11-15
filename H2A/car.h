#ifndef CAR_H
#define CAR_H

#include <string>


using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    void setBrand(string brand);
    void setModel(string model);
    void setYearModel(int yearModel);
    void printData();
};

#endif // CAR_H