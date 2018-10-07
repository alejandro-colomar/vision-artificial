/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/*	*	*	*	*	*	*	*	*	*
 *	*	* Standard	*	*	*	*	*	*
 *	*	*	*	*	*	*	*	*	*/
		/* getchar() */
	#include <stdio.h>

/*	*	*	*	*	*	*	*	*	*
 *	*	* Other	*	*	*	*	*	*	*
 *	*	*	*	*	*	*	*	*	*/
	#include "alx_ncur.h"

		/* about_init() & print_cpright() */
	#include "about.h"
	#include "img_iface.h"
	#include "menu_iface.h"
	#include "user_iface.h"
	#include "parser.h"
	#include "save.h"


/******************************************************************************
 ******* static functions *****************************************************
 ******************************************************************************/
void	init_all	(int *argc, char *(*argv[]));
void	cleanup		(void);


/******************************************************************************
 ******* main *****************************************************************
 ******************************************************************************/
int	main	(int argc, char *argv[])
{
	init_all(&argc, &argv);

	/* Print copyright () and wait for any key to continue */
	print_share_file(SHARE_COPYRIGHT);
	getchar();

	/* Menu () */
	menu_iface();

	cleanup();

	return	0;
}


/******************************************************************************
 ******* static functions *****************************************************
 ******************************************************************************/
void	init_all	(int *argc, char *(*argv[]))
{
	/* Init curses */
	alx_start_curses();
	alx_pause_curses();

	/* Init modules */
	about_init();
	save_init();

	/* Modes */
	menu_iface_mode		= MENU_IFACE_TUI;
	user_iface_mode		= USER_IFACE_TUI;

	/* Parse command line options */
	parser(*argc, *argv);
}

void	cleanup		(void)
{
	/* Clean img buffers */
	img_iface_cleanup_main();

	/* End curses */
	alx_resume_curses();
	alx_end_curses();
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
