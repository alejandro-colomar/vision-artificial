/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_SAVE_H
	# define	VA_SAVE_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
		/* opencv */
	#include <cv.h>
		/* FILENAME_MAX */
	#include <stdio.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
	# define	ENV_HOME		"HOME"

	# define	USER_PROG_DIR		"vision-artificial/"
	# define	USER_SAVED_DIR		"vision-artificial/saved/"
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
 ******* include guard ********************************************************
 ******************************************************************************/
# endif				/* save.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
