/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_IMG_CV_H
	# define	VA_IMG_CV_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
		/* openCV */
	#include <opencv2/opencv.hpp>


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Img_Cv_Action {
		IMG_CV_ACT_FOO = 0x000000u,

		IMG_CV_ACT_CV = 0x000100u,
		IMG_CV_ACT_PIXEL_VALUE,
		IMG_CV_ACT_SET_ROI,
		IMG_CV_ACT_AND_2REF,
		IMG_CV_ACT_NOT,
		IMG_CV_ACT_OR_2REF,
		IMG_CV_ACT_COMPONENT,
		IMG_CV_ACT_DILATE,
		IMG_CV_ACT_ERODE,
		IMG_CV_ACT_SMOOTH,
		IMG_CV_ACT_SOBEL,
		IMG_CV_ACT_MIRROR,
		IMG_CV_ACT_ROTATE_ORTO,
		IMG_CV_ACT_ROTATE,
		IMG_CV_ACT_ADAPTIVE_THRESHOLD,
		IMG_CV_ACT_CVT_COLOR,
		IMG_CV_ACT_DISTANCE_TRANSFORM,
		IMG_CV_ACT_THRESHOLD,
		IMG_CV_ACT_HISTOGRAM,
		IMG_CV_ACT_HISTOGRAM_C3,
		IMG_CV_ACT_CONTOURS,
		IMG_CV_ACT_CONTOURS_SIZE,
		IMG_CV_ACT_BOUNDING_RECT,
		IMG_CV_ACT_FIT_ELLIPSE,
		IMG_CV_ACT_MIN_AREA_RECT,
		IMG_CV_ACT_HOUGH_CIRCLES
	};


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
void	img_cv_act	(class cv::Mat  *imgptr, int action, void *data);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* img_cv.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
