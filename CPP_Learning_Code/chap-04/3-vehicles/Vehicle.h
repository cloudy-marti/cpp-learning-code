#pragma once

#include <iostream>

class Driver
{
    public:
        bool has_licence() const { return _has_licence; }
        void pass_car_licence_exam() { _has_licence = true; }

        bool has_air_licence() const { return _has_air_licence; }
        void pass_air_licence_exam() { _has_air_licence = true; }

    private:
        bool _has_licence = false;
        bool _has_air_licence = false;
};

class Vehicle
{
protected:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}

public:
    virtual ~Vehicle() {}

    virtual unsigned int drive() const = 0;
    // {
    //     std::cerr << "Not implemented" << std::endl;
    //     return 0u;
    // }

protected:
    const Driver& _driver;
};


/**
 * Dans l'exercice de la ferme, j'ai du définir le destructeur virtuel de Animal avant que ce soit indiqué dans la consigne sinon ça compile pas :
[build] C:\Users\cloud\Desktop\INFO\INFO-3\INFO_CPP\CPP_Learning_Code\chap-04\2-farm\Opera.h:30:24: error: deleting object of polymorphic class type 'Animal' which has non-virtual destructor might cause undefined behavior [-Werror=delete-non-virtual-dtor]
[build]                  delete animal;
[build]                         ^~~~~~
[build] cc1plus.exe: all warnings being treated as errors
Le warning disparaissait que lorsque je rajoutait un destructeur vide à Animal:
virtual ~Animal() {};

**/