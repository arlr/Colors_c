
/*=============================================================================================

			 Fichier : Colors 	 Créé par : arthur
				 Le : 04/07/20  16:48:25 

=============================================================================================*/

/* Includes */
#include <stdio.h>

/* Defines */
#define ESCAPE_CODE_COLOR_SIZE 10
#define ESCAPE_CODE_DECORATION_SIZE 9

#define DEFAULT {0x5C,"u","0","0","1","b","[","0","m"}	// Default colors "\u001b[0m"



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
int pcol_easy(char * ac_data_to_print, char c_text_color, char c_back_ground_color, char c_decoration);


/* Functions body */
int pcol_easy(char * ac_data_to_print, char c_text_color, char c_back_ground_color, char c_decoration){
	/* Variable declaration */
	int i_status = 1;	// Return status by default return error
	char ac_text_setter[ESCAPE_CODE_COLOR_SIZE];	//ESCAPE codes for text color
	char ac_bg_setter[ESCAPE_CODE_COLOR_SIZE];	//ESCAPE codes for background color
	char ac_dec_setter[ESCAPE_CODE_DECORATION_SIZE];	//ESCAPE codes for decoration

	/* SET TEXT Color */
	switch (c_text_color)
	{
	case 'K':
		ac_text_setter = {0x5C,"u","0","0","1","b","[","3","0","m"};

	
	default:

	}


	return i_status;
}