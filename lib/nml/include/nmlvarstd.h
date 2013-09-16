/**
 * @file	nmlvaluestd.h
 * @author	Rasty3D
 * @version	1.0
 * @date	16-Sept-2013
 * @brief	NML standard variable classes
 */

#ifndef NMLVARSTD_H_
#define NMLVARSTD_H_

/*
 * INCLUDES
 */

	/* General */
#include <iostream>

	/* NML */
#include "nmlvar.h"


/*
 * CLASSES
 */

/** NML variable key class */
class NMLvar_key : public NMLvar
{
private:
	std::string key;
};

/** NML variable float class */
class NMLvar_float : public NMLvar
{
private:
	float value;
};

/** NML variable vec2 class */
class NMLvar_vec2 : public NMLvar
{
private:
	float x;
	float y;
};

/** NML variable string class */
class NMLvar_string : public NMLvar
{
private:
	std::string value;
};

#endif	/* NMLVARSTD_H_ */
