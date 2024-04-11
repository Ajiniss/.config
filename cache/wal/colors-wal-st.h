const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0B0D0A", /* black   */
  [1] = "#DB512E", /* red     */
  [2] = "#708E62", /* green   */
  [3] = "#A29360", /* yellow  */
  [4] = "#D8A55C", /* blue    */
  [5] = "#77A786", /* magenta */
  [6] = "#C0CAA2", /* cyan    */
  [7] = "#f0f2df", /* white   */

  /* 8 bright colors */
  [8]  = "#a8a99c",  /* black   */
  [9]  = "#DB512E",  /* red     */
  [10] = "#708E62", /* green   */
  [11] = "#A29360", /* yellow  */
  [12] = "#D8A55C", /* blue    */
  [13] = "#77A786", /* magenta */
  [14] = "#C0CAA2", /* cyan    */
  [15] = "#f0f2df", /* white   */

  /* special colors */
  [256] = "#0B0D0A", /* background */
  [257] = "#f0f2df", /* foreground */
  [258] = "#f0f2df",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
