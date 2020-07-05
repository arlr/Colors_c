
/*=============================================================================================

			 Fichier : Colors 	 Créé par : arthur
				 Le : 04/07/20  16:48:25 

=============================================================================================*/

/* Includes */
#include <stdio.h>

/* Defines */

/* Functions prototype */
/*
 * @brief pcol_easy print color easy
 * @detail print a string with different colors and decoration
 * @param {ac_data_to_print} string to print
 * @param {c_text_color} char to choose the text color 
 * K = BLACK
 * R = RED
 * G = GREEN
 * Y = YELLOW
 * B = BLUE
 * M = MAGENTA
 * C = CYAN
 * W = WHITE
 * @param {c_back_ground_color} change the text background
 * K = BLACK
 * R = RED
 * G = GREEN
 * Y = YELLOW
 * B = BLUE
 * M = MAGENTA
 * C = CYAN
 * W = WHITE
 * @param {c_decoration} text decoration
 * B = BOLD
 * U = UNDERLINE
 * D = NO DECORATION
 * @return return 0 when no issues
 */
int pcol_easy(char * ac_data_to_print, char c_text_color, char c_back_ground_color, char c_decoration)
/* Functions body */