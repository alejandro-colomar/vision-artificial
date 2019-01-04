/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_IMG_ZBAR_H
	# define	VA_IMG_ZBAR_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Packages ------------------------------------------------------------------*/
		/* openCV */
	#include <opencv2/opencv.hpp>


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Img_ZB_Action {
		IMG_ZB_ACT_FOO = 0x000000u,

		IMG_ZB_ACT_ZB = 0x000800u,
		IMG_ZB_ACT_DECODE
	};


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
void	img_zb_act	(class cv::Mat  *imgptr, int action, void *data);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* img_zbar.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
