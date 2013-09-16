/**
 * @file	nmlobject.h
 * @author	Rasty3D
 * @version	1.0
 * @date	16-Sept-2013
 * @brief	NML object class
 */

#ifndef NMLOBJECT_H_
#define NMLOBJECT_H_

/*
 * INCLUDES
 */

	/* General */
#include <iostream>
#include <vector>

	/* NML */
#include "nmlprop.h"


/*
 * CLASS
 */

/** NML object class */
class NMLobject
{
private:
	std::string name;
	std::string id;
	std::vector<NMLprop> props;
	std::vector<NMLobject> objects;
};

#endif	/* NMLOBJECT_H_ */
