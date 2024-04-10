const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#291318", /* black   */
  [1] = "#C7A29A", /* red     */
  [2] = "#C9AEAE", /* green   */
  [3] = "#FEBAB5", /* yellow  */
  [4] = "#F6C7B4", /* blue    */
  [5] = "#D8BBC2", /* magenta */
  [6] = "#F8D1D0", /* cyan    */
  [7] = "#f2e6e3", /* white   */

  /* 8 bright colors */
  [8]  = "#a9a19e",  /* black   */
  [9]  = "#C7A29A",  /* red     */
  [10] = "#C9AEAE", /* green   */
  [11] = "#FEBAB5", /* yellow  */
  [12] = "#F6C7B4", /* blue    */
  [13] = "#D8BBC2", /* magenta */
  [14] = "#F8D1D0", /* cyan    */
  [15] = "#f2e6e3", /* white   */

  /* special colors */
  [256] = "#291318", /* background */
  [257] = "#f2e6e3", /* foreground */
  [258] = "#f2e6e3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
