/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_PROC_RESISTOR_H
	# define	VA_PROC_RESISTOR_H


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Proc_Resistor {
		RESISTOR_OK,
		RESISTOR_NOK_RESISTOR,
		RESISTOR_NOK_BANDS,
		RESISTOR_NOK_STD_VALUE,
		RESISTOR_NOK_TOLERANCE
	};


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	int	proc_resistor		(void);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* proc_resistor.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/