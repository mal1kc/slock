/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "black",     /* after initialization */
    [INPUT] = "#005577",  /* during input */
    [FAILED] = "#CC3333", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char *message = "screen locked with slock.";

/* text color */
static const char *text_color = "#b8f";

/* text size (must be a valid size) */
static const char *font_name = "6x13";

/* insert grid pattern with scale 1:1, the size can be changed with logosize
 */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

/*  mlk
 *  dwm
 *  ------------
 *  -------*-*--
 *  --******-**-
 *  --**-*-**---
 *  --**-*-*-*--
 *
 *
 *  ------------
 *  ------------
 *  ------------
 *  ------------
 *  ------------
 *
 * */

static XRectangle rectangles[10] = {
    /* x    y       w       h */
    {2, 2, 2, 3}, {2, 2, 6, 1}, {5, 2, 1, 3}, {7, 0, 1, 5},
    {8, 2, 1, 1}, {9, 3, 1, 2}, {9, 0, 1, 2}, {9, 1, 2, 1}};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius = 5;
/*Enable Pixelation*/
// #define PIXELATION
/*Set pixelation radius*/
static const int pixelSize = 0;
