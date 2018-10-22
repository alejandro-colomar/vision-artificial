/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# ifndef		VA_IMG_IFACE_HPP
	# define	VA_IMG_IFACE_HPP


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
/* Packages ------------------------------------------------------------------*/
		/* opencv */
	#include <opencv2/opencv.hpp>
		/* zbar */
	#include <zbar.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
	# define	CONTOURS_MAX		(65536)
	# define	OCR_TEXT_MAX		(1048576)
	# define	ZB_CODES_MAX		(10)
	# define	ZBAR_LEN_MAX		(1048576)

	# define	IMG_IFACE_THR_OTSU	(-1)


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/
	enum	Img_Iface_Action {
		IMG_IFACE_ACT_FOO = 0,

		IMG_IFACE_ACT_CV = 0x0100,
		IMG_IFACE_ACT_INVERT,
		IMG_IFACE_ACT_BGR2GRAY,
		IMG_IFACE_ACT_COMPONENT,
		IMG_IFACE_ACT_SMOOTH,
		IMG_IFACE_ACT_THRESHOLD,
		IMG_IFACE_ACT_ADAPTIVE_THRESHOLD,
		IMG_IFACE_ACT_DILATE,
		IMG_IFACE_ACT_ERODE,
		IMG_IFACE_ACT_CONTOURS,
		IMG_IFACE_ACT_CONTOURS_SIZE,
		IMG_IFACE_ACT_MIN_AREA_RECT,
		IMG_IFACE_ACT_ROTATE_ORTO,
		IMG_IFACE_ACT_ROTATE,
		IMG_IFACE_ACT_SET_ROI,

		IMG_IFACE_ACT_DILATE_ERODE,
		IMG_IFACE_ACT_ERODE_DILATE,
		IMG_IFACE_ACT_ROTATE_2RECT,

		IMG_IFACE_ACT_ZB = 0x0200,
		IMG_IFACE_ACT_DECODE,

		IMG_IFACE_ACT_OCR = 0x0400,
		IMG_IFACE_ACT_READ,

		IMG_IFACE_ACT_ORB = 0x0800,
		IMG_IFACE_ACT_ALIGN,

		IMG_IFACE_ACT_IMGI = 0x1000,
		IMG_IFACE_ACT_APPLY,
		IMG_IFACE_ACT_DISCARD,
		IMG_IFACE_ACT_SAVE_MEM,
		IMG_IFACE_ACT_LOAD_MEM,
		IMG_IFACE_ACT_SAVE_REF,

		IMG_IFACE_ACT_SAVE = 0x2000,
		IMG_IFACE_ACT_SAVE_FILE
	};

	enum	Img_Iface_Cmp {
		IMG_IFACE_CMP_BLUE = 0,
		IMG_IFACE_CMP_GREEN,
		IMG_IFACE_CMP_RED
	};

	enum	ImgI_Smooth {
		IMGI_SMOOTH_MEAN = 1,
		IMGI_SMOOTH_GAUSS,
		IMGI_SMOOTH_MEDIAN
	};

	enum	Img_Iface_OCR_Lang {
		IMG_IFACE_OCR_LANG_ENG = 0,
		IMG_IFACE_OCR_LANG_SPA,
		IMG_IFACE_OCR_LANG_CAT,
		IMG_IFACE_OCR_LANG_DIGITS,
		IMG_IFACE_OCR_LANG_DIGITS_COMMA
	};

	enum	Img_Iface_OCR_Conf {
		IMG_IFACE_OCR_CONF_NONE = 0,
		IMG_IFACE_OCR_CONF_PRICE
	};


/******************************************************************************
 ******* structs **************************************************************
 ******************************************************************************/
/* img_cv --------------------------------------------------------------------*/
	struct	Img_Iface_Data_Component {
		int	cmp;
	};

	struct	Img_Iface_Data_Smooth {
		int	method;
		int	msk_siz;
	};

	struct	Img_Iface_Data_Threshold {
		int	thr_typ;
		int	thr_val;
	};

	struct	Img_Iface_Data_Adaptive_Thr {
		int	method;
		int	thr_typ;
		int	nbh_val;
	};

	struct	Img_Iface_Data_Dilate_Erode {
		int	i;
	};

	struct	Img_Iface_Data_Contours {
		std::vector <std::vector <class cv::Point_ <int>>>	*contours;
		class cv::Mat						*hierarchy;
	};

	struct	Img_Iface_Data_Contours_Size {
		std::vector <std::vector <class cv::Point_ <int>>>	*contours;
		double							area [CONTOURS_MAX];
		double							perimeter [CONTOURS_MAX];
	};

	struct	Img_Iface_Data_MinARect {
		std::vector <class cv::Point_ <int>>	*contour;
		class cv::RotatedRect			*rect;
	};

	struct	Img_Iface_Data_Rotate_Orto {
		int	n;
	};

	struct	Img_Iface_Data_Rotate {
		class cv::Point_ <float>	center;
		double				angle;
	};

	struct	Img_Iface_Data_SetROI {
		class cv::Rect_ <int>	rect;
	};

/* img_zbar -------------------------------------------------------------------*/
	struct	Img_Iface_Data_Decode {
		enum zbar::zbar_symbol_type_e	code_type;
	};

	struct	Img_Iface_ZB_Codes {
		int	n;
		struct {
			enum zbar::zbar_symbol_type_e	type;
			char				sym_name [80];
			char				data [ZBAR_LEN_MAX];
		} arr [ZB_CODES_MAX];
	};

/* img_ocr -------------------------------------------------------------------*/
	struct	Img_Iface_Data_Read {
		int	lang;
		int	conf;
		struct {
			void	*data;
			int	width;
			int	height;
			int	B_per_pix;
			int	B_per_line;
		} img;
	};


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
extern	"C" {


/******************************************************************************
 ******* variables ************************************************************
 ******************************************************************************/
	extern	char				img_ocr_text [OCR_TEXT_MAX];
	extern	struct Img_Iface_ZB_Codes	zb_codes;


/******************************************************************************
 ******* functions ************************************************************
 ******************************************************************************/
	void	img_iface_cleanup_main	(void);
	void	img_iface_load		(const char *fpath, const char *fname);
	void	img_iface_cleanup	(void);
	void	img_iface_act		(int action, void *data);
	void	img_iface_show		(void);


/******************************************************************************
 ******* C wrapper ************************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
# endif			/* img_iface.hpp */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
