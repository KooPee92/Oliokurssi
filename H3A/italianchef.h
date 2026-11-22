#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string name);
    ~ItalianChef();

    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H