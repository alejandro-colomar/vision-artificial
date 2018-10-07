/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_USER_IFACE_H
	# define	VA_USER_IFACE_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
	/* struct IplImage */
	#include "cv.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
	# define	LOG_LEN		(1024)
	# define	LOG_LINE_LEN	(35)


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Player_Iface_Mode {
		USER_IFACE_FOO,
		USER_IFACE_CLUI,
		USER_IFACE_TUI
	};

	enum	Player_Iface_Action {
		USER_IFACE_ACT_FOO = 0,

		USER_IFACE_ACT_INVERT = 1000,
		USER_IFACE_ACT_BGR2GRAY,

		USER_IFACE_ACT_DECODE = 2000,

		USER_IFACE_ACT_APPLY = 4000,
		USER_IFACE_ACT_DISCARD,
		USER_IFACE_ACT_SAVE_MEM,
		USER_IFACE_ACT_LOAD_MEM,
		USER_IFACE_ACT_SAVE_FILE,

		USER_IFACE_ACT_QUIT = 5000
	};


/******************************************************************************
 ******* structs **************************************************************
 ******************************************************************************/
	struct	User_Iface_Log {
		int	len;
		char	line [LOG_LEN] [LOG_LINE_LEN];
		int	lvl [LOG_LEN];
	};


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/
extern	int			user_iface_mode;
extern	struct User_Iface_Log	user_iface_log;


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
void	user_iface_init		(void);
void	user_iface_cleanup	(void);
void	user_iface		(struct _IplImage  *imgptr);
void	user_iface_save_name	(const char *filepath, char *filename, int destsize);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* user_iface.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
