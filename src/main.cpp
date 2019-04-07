/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	GPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdio>

#include "libalx/base/stdio/wait.hpp"
#include "libalx/extra/ncurses/common.hpp"

#include "vision-artificial/about/about.hpp"
#include "vision-artificial/image/iface.hpp"
#include "vision-artificial/menu/iface.hpp"
#include "vision-artificial/menu/parse.hpp"
#include "vision-artificial/save/save.hpp"
#include "vision-artificial/user/iface.hpp"


/******************************************************************************
 ******* static functions *****************************************************
 ******************************************************************************/
static	void	init	(int *argc, char *(*argv[]));
static	void	deinit	(void);


/******************************************************************************
 ******* main *****************************************************************
 ******************************************************************************/
int	main	(int argc, char *argv[])
{

	init(&argc, &argv);

	print_share_file(SHARE_COPYRIGHT);
	alx_wait4enter();

	menu_iface();

	deinit();

	return	0;
}


/******************************************************************************
 ******* static functions *****************************************************
 ******************************************************************************/
static	void	init	(int *argc, char *(*argv[]))
{

	alx_ncurses_init();
	alx_ncurses_pause();

	about_init();
	save_init();

	menu_iface_mode		= MENU_IFACE_TUI;
	user_iface_mode		= USER_IFACE_TUI;
	user_iface_log.visible	= 2;

	parse(*argc, *argv);
}

static	void	deinit	(void)
{

	img_iface_deinit();

	alx_ncurses_resume();
	alx_ncurses_deinit();
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
