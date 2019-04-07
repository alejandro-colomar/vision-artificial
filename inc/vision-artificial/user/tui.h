/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	GPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#ifndef VA_USER_TUI_H
#define VA_USER_TUI_H


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* structs / unions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern functions *****************************************************
 ******************************************************************************/
void	user_tui_init		(void);
void	user_tui_cleanup	(void);
int	user_tui		(const char *restrict title,
				const char *restrict subtitle);
void	user_tui_show_log	(const char *restrict title,
				const char *restrict subtitle);
void	user_tui_fname		(const char *restrict fpath,
				char *restrict fname);
double	user_tui_getdbl		(double m, double def, double M,
				const char *restrict title,
				const char *restrict help);
int	user_tui_getint		(int m, int def, int M,
				const char *restrict title,
				const char *restrict help);
void	user_tui_show_ocr	(void);


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#endif		/* vision-artificial/user/tui.h */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
