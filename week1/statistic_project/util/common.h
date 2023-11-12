/********************************************************************************
 * @file common.h
 * @brief Utilities for the entire project
 *
 * This package contains the implementation of the transversal functionalities 
 * of the entire project.
 *
 * @author Roberto Castro Beltran
 * @date 08 november 2023
 *
 *******************************************************************************/

#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>

#define LOG_LN(x) std::cout << x << std::endl;

#define LOG(x) std::cout << x;

#define LOG_ERR(x) std::cerr << x << std::endl;

#endif /* _COMMON_H_ */