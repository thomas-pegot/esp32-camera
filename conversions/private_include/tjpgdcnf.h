/*----------------------------------------------*/
/* TJpgDec System Configurations R0.03          */
/*----------------------------------------------*/

#define	JD_SZBUF		512
/* Specifies size of stream input buffer */

extern unsigned JD_FORMAT;
/* Specifies output pixel format.
/  0: RGB888 (24-bit/pix)
/  1: RGB565 (16-bit/pix)
/  2: Grayscale (8-bit/pix)
*/

#define	JD_USE_SCALE	0
/* Switches output descaling feature.
/  0: Disable
/  1: Enable
*/

#define JD_TBLCLIP		0
/* Use table conversion for saturation arithmetic. A bit faster, but increases 1 KB of code size.
/  0: Disable
/  1: Enable
*/

#define JD_FASTDECODE	1
/* Optimization level
/  0: Basic optimization. Suitable for 8/16-bit MCUs.
/  1: + 32-bit barrel shifter. Suitable for 32-bit MCUs.
/  2: + Table conversion for huffman decoding (wants 6 << HUFF_BIT bytes of RAM)
*/

#define DCT_FILTER 0
/** Filter on DCT trasnform outside pf Mean +/- 3 sigma
 * No change in result and more computation so it's pretty useless
 *  0: Disable
 *  1: Enable
 */


#define PHASE_DCT 1
/** Display DCT Phase / Modulation
 *  0: Disable
 *  1: DCT Modulation
 *  2: DCT Phase
 */