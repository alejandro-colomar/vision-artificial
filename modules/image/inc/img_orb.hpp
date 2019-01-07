/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	GPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_IMG_ORB_HPP
	# define	VA_IMG_ORB_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
		/* openCV */
	#include <opencv2/opencv.hpp>


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Img_ORB_Action {
		IMG_ORB_ACT_FOO = 0x000000u,

		IMG_ORB_ACT_ORB = 0x000200u,
		IMG_ORB_ACT_ALIGN
	};


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
void	img_orb_act	(const class cv::Mat  *img_ref,
			class cv::Mat  *imgptr,  int  action);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* img_orb.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
