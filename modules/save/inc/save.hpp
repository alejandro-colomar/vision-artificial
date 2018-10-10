/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_SAVE_HPP
	# define	VA_SAVE_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Standard C ----------------------------------------------------------------*/
		/* FILENAME_MAX */
	#include <cstdio>

/* Project -------------------------------------------------------------------*/
		/* struct _IplImage */
	#include <opencv2/opencv.hpp>


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
extern	"C" {


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
	# define	ENV_HOME		"HOME"

	# define	USER_PROG_DIR		".vision-artificial/"
	# define	USER_SAVED_DIR		".vision-artificial/saved/"
	# define	SAVED_NAME_DEFAULT	"saved"


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/
	extern	struct _IplImage	*image;
	extern	char			home_path [FILENAME_MAX];
	extern	char			user_prog_path [FILENAME_MAX];
	extern	char			saved_path [FILENAME_MAX];
	extern	char			saved_name [FILENAME_MAX];


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	void	save_init	(void);
	void	save_cleanup	(void);
	void	save_clr	(void);
	void	load_image_file	(void);
	void	save_image_file	(void);


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif				/* save.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
