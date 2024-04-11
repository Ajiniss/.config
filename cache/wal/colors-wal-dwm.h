static const char norm_fg[] = "#f0f2df";
static const char norm_bg[] = "#0B0D0A";
static const char norm_border[] = "#a8a99c";

static const char sel_fg[] = "#f0f2df";
static const char sel_bg[] = "#708E62";
static const char sel_border[] = "#f0f2df";

static const char urg_fg[] = "#f0f2df";
static const char urg_bg[] = "#DB512E";
static const char urg_border[] = "#DB512E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
