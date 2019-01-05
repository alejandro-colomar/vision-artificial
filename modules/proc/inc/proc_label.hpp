/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	GPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_PROC_LABEL_HPP
	# define	VA_PROC_LABEL_HPP


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Proc_Label {
		LABEL_OK,
		LABEL_NOK_LABEL,
		LABEL_NOK_CERDO,
		LABEL_NOK_BCODE,
		LABEL_NOK_PRODUCT,
		LABEL_NOK_PRICE
	};


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
extern	"C" {


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
int	proc_label		(void);


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* proc_label.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
