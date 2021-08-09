/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar           = 1;    /* -b:  whether bar is at top or bottom of screen */
static int min              = 0;    /* -l:  lower bound */
static int max              = 100;  /* -u:  upper bound */
static int initval          = 0;    /* -x:  initial value */
static int labelval         = 1;    /* -lv: whether to display value label */
static int labelexts        = 1;    /* -le: whether to display extent labels */
static int step             = 1;    /* -s:  minimum adjustment */
static int jump             = 10;   /* -j:  large adjustment */
static const char *prompt   = NULL; /* -p:  prompt to the left of slider */
static const char *special  = NULL; /* -z:  special text */
static const char *fonts[]  = {     /* -f:  font set */
	"LiterationMono Nerd Font:pixelsize=14"
};

static char prompt_fg[] = "#000000";
static char prompt_bg[] = "#000000";
static char slider_fg[] = "#000000";
static char slider_bg[] = "#000000";
static char value_fg[] = "#000000";
static char value_bg[] = "#000000";

static const char *colors[SchemeLast][2] = {
	/*                 fg         bg */
	[SchemePrompt] = { prompt_fg, prompt_bg },
	[SchemeSlider] = { slider_fg, slider_bg }, /* fg: extent labels, bg: slider beyond value */
	[SchemeValue]  = { value_fg, value_bg }, /* fg: value label, bg: slider up to value */
};


ResourcePref resources[] = {
	{ "promptfgcolor", STRING, &prompt_fg },
	{ "promptbgcolor", STRING, &prompt_bg },
	{ "sliderfgcolor", STRING, &slider_fg },
	{ "sliderbgcolor", STRING, &slider_bg },
	{ "valuefgcolor", STRING, &value_fg },
	{ "valuebgcolor", STRING, &value_bg },
};

