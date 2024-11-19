#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void jouer() = 0; 
    virtual ~Instrument() {} 
};

class Saxophone : public Instrument {
public:
    void jouer() override;
};

class Piano : public Instrument {
public:
    void jouer() override;
};

#endif
#pragma once
