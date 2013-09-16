/**
 * @file	nmlprop.h
 * @author	Rasty3D
 * @version	1.0
 * @date	16-Sept-2013
 * @brief	NML property class
 */

#ifndef NMLPROP_H_
#define NMLPROP_H_

/*
 * INCLUDES
 */

	/* General */
#include <iostream>
#include <vector>

	/* NML */
#include "nmlvar.h"


/*
 * CLASS
 */

/** NML property class */
class NMLprop
{
private:
	std::string name;
	std::vector<NMLvar> vars;
};

#endif	/* NMLPROP_H_ */
