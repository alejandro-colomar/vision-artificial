/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_PROC_LIGHTER_H
	# define	VA_PROC_LIGHTER_H


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Proc_Lighter {
		LIGHTER_OK,
		LIGHTER_NOK_LIGHTER,
		LIGHTER_NOK_SIZE
	};


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	int	proc_lighter_calibrate	(void);
	int	proc_lighter		(void);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* proc_lighter.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
