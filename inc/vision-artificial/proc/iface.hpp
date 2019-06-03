/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	GPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef VA_PROC_IFACE_HPP
#define VA_PROC_IFACE_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
enum	Proc_Mode {
	PROC_MODE_FOO,

	PROC_MODE = 0x008000u,
	PROC_MODE_LABEL_SERIES,
	PROC_MODE_LABEL_CALIB,
	PROC_MODE_OBJECTS_SERIES,
	PROC_MODE_OBJECTS_CALIB,
	PROC_MODE_COINS_SERIES,
	PROC_MODE_COINS_CALIB,
	PROC_MODE_RESISTOR_SERIES,
	PROC_MODE_RESISTOR_CALIB,
	PROC_MODE_LIGHTERS_SERIES,
	PROC_MODE_LIGHTERS_CALIB
};

enum	Proc_DBG {
	PROC_DBG_NO,
	PROC_DBG_STOP_ITEM,
	PROC_DBG_DELAY_STEP,
	PROC_DBG_STOP_STEP
};


/******************************************************************************
 ******* structs / unions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/
extern	int	proc_debug;
extern	int	proc_mode;


/******************************************************************************
 ******* extern functions *****************************************************
 ******************************************************************************/
extern	"C"
{
int	proc_iface_single	(int action);
void	proc_iface_series	(void);
}


/******************************************************************************
 ******* static inline functions (prototypes) *********************************
 ******************************************************************************/


/******************************************************************************
 ******* static inline functions (definitions) ********************************
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* vision-artificial/proc/iface.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/