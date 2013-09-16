/**
 * @file	nml.h
 * @author	Rasty3D
 * @version	1.0
 * @date	16-Sept-2013
 * @brief	NML main class
 */

#ifndef NML_H_
#define NML_H_

/*
 * INCLUDES
 */

	/* NML */
#include "nmlobject.h"


/*
 * CLASS
 */

/** NML main class */
class NML
{
private:
	std::vector<NMLvar> defines;
	std::vector<NMLobject> objects;

public:
	bool open(const char *filename);

};

#endif	/* NML_H_ */
