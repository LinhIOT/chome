/***************************************************************************************************
 * \copyright   C Home team
 * 
 **************************************************************************************************/
 
/***************************************************************************************************
 * \file        chome.h
 * The master header file for chome library.
 * The chome.h file is the master header file includes all header files of the chome platform 
 * library. Use a user-defined file chome_LibCfg.h file to include or exclude a particular
 * module of the library.
 **************************************************************************************************/
 
#ifndef CHOME_H_
#define CHOME_H_

#ifdef __cplusplus
extern "C" {
#endif
 
/* User-defined configuration for library */
#define "chome_LibCfg.h"

/* Include other libraries here */

/** \brief chome library major version */
#define CHOME_LIBRARY_MAJOR_VERSION    0

/** \brief chome library minor version */
#define CHOME_LIBRARY_MINOR_VERSION    0


#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif

#endif /* CHOME_H_ */
 