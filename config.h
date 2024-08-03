/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "black",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* static const char *imgpath          = "ramus.xpm"; */
static const ImgArg imgdata[]         = 
{
    { "maxwell_1_0.xpm",    65      },
    { "maxwell_1_1.xpm",    65      },
    { "maxwell_2_2.xpm",    130     },
    { "maxwell_2_3.xpm",    130     },
};

#define FRAMECOUNT 4

static const int imgwidth           = 498;
static const int imgheight          = 498;
static const int imgoffsetx         = 711;
static const int imgoffsety         = 291;
static const int showimgonlyatstart = 0;
