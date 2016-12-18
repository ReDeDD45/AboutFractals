#ifndef RecSequence_H
#define RecSequence_H

template<typename> T
class RecSequence
{
private:
	T u0;
	T uCurrent;
	int N;

public:
	RecSequence() {
		u0 = T();
		uCurrent = u0;
		N = 10000;
	}
	RecSequence(T& u0Source, int NSource) {
		u0 = u0Source;
		uCurrent = u0;
		N = NSource;
	}

	virtual void Next() = 0;
	virtual bool IsConvergent() = 0;

};

#endif
