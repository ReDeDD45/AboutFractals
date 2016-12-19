//
// Created by Edouard REGNIER on 19/12/2016.
//

#ifndef RecSeqBrot_H
#define RecSeqBrot_H

#include "RecSequence.h"
#include "Complex.h"


class RecSeqBrot :
        public RecSequence
{
private:
    Complex c;
    int nPower;

public:
    RecSeqBrot() :RecSequence() {
        Complex c();
        nPower = 2;
    }

    RecSeqBrot(Complex& u0Source, int NSource, Complex& cSource, int nPowerSource) :RecSequence(u0Source, NSource) {
        c = cSource;
        nPower = nPowerSource;
    }

    void Next() {
        for (int i = 1; i <= N; i++) {

        }
    }

    bool IsConvergent() {

    }
};

#endif

