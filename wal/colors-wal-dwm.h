static const char norm_fg[] = "#f2e6e3";
static const char norm_bg[] = "#291318";
static const char norm_border[] = "#a9a19e";

static const char sel_fg[] = "#f2e6e3";
static const char sel_bg[] = "#C9AEAE";
static const char sel_border[] = "#f2e6e3";

static const char urg_fg[] = "#f2e6e3";
static const char urg_bg[] = "#C7A29A";
static const char urg_border[] = "#C7A29A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
