#ifndef RecSecBrot_H
#define RecSecBrot_H

#include "RecSequence.h"
#include "Complex.h"

template<typename> T
class RecSecBrot :
	public RecSequence<T>
{
private:
	Complex c;
	int nPower;

public:
	RecSecBrot() :RecSequence<T>() {
		Complex c();
		nPower = 2;
	}

	RecSecBrot(T& u0Source, int NSource, Complex& cSource, int nPowerSource) :RecSequence<T>(T& u0Source, int NSource) {
		c = cSource;
		nPower = nPowerSource;
	}

	void Next() {
		for (int i = 1; i <= N; i++) {
			uCurrent =
		}
	}

	bool IsConvergent() {

	}
};

#endif

