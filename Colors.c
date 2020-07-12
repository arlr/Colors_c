
/*=============================================================================================

			 Fichier : Colors 	 Créé par : arthur
				 Le : 04/07/20  16:48:25 

=============================================================================================*/

/* Includes */
#include <stdio.h>
#include <string.h>


/* Defines */
//#define DEBUG
#define ESCAPE_CODE_COLOR_SIZE 10
#define ESCAPE_CODE_DECORATION_SIZE 9

#define DEFAULT {0x5C,"u","0","0","1","b","[","0","m"}	// Default colors "\u001b[0m"



/* Local Functions prototype */
int text_col(char c_color, char *buf);

int pcol_easy(char * ac_data_to_print, char c_text_color, char c_back_ground_color, char c_decoration);


/* Functions body */
/*
 * @brief text_col color the text
 * @detail return the escape code corresponding to the color 
 * @param {c_color} Text Color
 * K = BLACK
 * R = RED
 * G = GREEN
 * Y = YELLOW
 * B = BLUE
 * M = MAGENTA
 * C = CYAN
 * W = WHITE
 * @param {buf} buffer to fill  
 * @return pointeur on array witch containning the escape code string 
 */
int text_col(char c_color, char *buf){

	printf("Start %s\n", __FUNCTION__);


	int i_status = 1;	// Return status by default return error
	char local_buf[ESCAPE_CODE_COLOR_SIZE] = {0x5C,'u','0','0','1','b','[','0','m',' '};	//ESCAPE codes for text color

	

#ifdef DEBUG
	printf("Size of string = %d \n", sizeof(local_buf));

	for (unsigned char i = 0; i < ESCAPE_CODE_COLOR_SIZE; i++)
	{
		printf("%c",local_buf[i]);
	}

	printf("\n");
	printf("Begin Switch case \n");
#endif
	/* SET TEXT Color */
	switch (c_color)
	{
		/* Black */
		case 'K':
			printf("Text Black\n");
			local_buf[7] = '3';
			local_buf[8] = '0';
			local_buf[9] = 'm';
			break;
		
		/* Red */
		case 'R':
			printf("Text Red\n");
			local_buf[7] = '3';
			local_buf[8] = '1';
			local_buf[9] = 'm';
			break;

		/* Green */
		case 'G':
			printf("Text Green\n");
			local_buf[7] = '3';
			local_buf[8] = '2';
			local_buf[9] = 'm';
			break;

		/* Yellow */
		case 'Y':
			printf("Text Yellow\n");
			local_buf[7] = '3';
			local_buf[8] = '3';
			local_buf[9] = 'm';			
			break;

		/* Blue */
		case 'B':
			printf("Text Blue\n");
			local_buf[7] = '3';
			local_buf[8] = '4';
			local_buf[9] = 'm';
			break;

		/* Magenta */
		case 'M':
			printf("Text Magenta\n");
			local_buf[7] = '3';
			local_buf[8] = '5';
			local_buf[9] = 'm';
			break;
		
		/* Cyan */
		case 'C':
			printf("Text Cyan\n");
			local_buf[7] = '3';
			local_buf[8] = '6';
			local_buf[9] = 'm';
			break;

		/* White */
		case 'W':
			printf("Text White\n");
			local_buf[7] = '3';
			local_buf[8] = '7';
			local_buf[9] = 'm';
			break;

		default:
			local_buf[7] = '0';
			local_buf[8] = 'm';
			local_buf[9] = '\0';
	}
	
/* Copy the local_buffer content in the buf */
for (unsigned char i = 0; i < ESCAPE_CODE_COLOR_SIZE; i++)
{
	buf[i] = local_buf[i];

#ifdef DEBUG
	printf("%c", local_buf[i]);
#endif
}


	printf("End %s\n", __FUNCTION__);
	return i_status;
}

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
int pcol_easy(char * ac_data_to_print, char c_text_color, char c_back_ground_color, char c_decoration){
	/* Variable declaration */
	int i_status = 1;	// Return status by default return error
	char ac_bg_setter[ESCAPE_CODE_COLOR_SIZE] = {"\\u001b[0m\0"};	//ESCAPE codes for background color
	char ac_dec_setter[ESCAPE_CODE_DECORATION_SIZE] = {"\\u001b[0m"};	//ESCAPE codes for decoration

	/* SET Back Ground Color */
	switch (c_back_ground_color)
	{
		/* Black */
		case 'K':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '0';
			ac_bg_setter[9] = 'm';
		
		/* Red */
		case 'R':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '1';
			ac_bg_setter[9] = 'm';

		/* Green */
		case 'G':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '2';
			ac_bg_setter[9] = 'm';

		/* Yellow */
		case 'Y':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '3';
			ac_bg_setter[9] = 'm';

		/* Blue */
		case 'B':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '4';
			ac_bg_setter[9] = 'm';
		
		/* Magenta */
		case 'M':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '5';
			ac_bg_setter[9] = 'm';
		
		/* Cyan */
		case 'C':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '6';
			ac_bg_setter[9] = 'm';

		/* White */
		case 'W':
			ac_bg_setter[7] = '4';
			ac_bg_setter[8] = '7';
			ac_bg_setter[9] = 'm';

		default:
			ac_bg_setter[7] = '0';
			ac_bg_setter[8] = 'm';
			ac_bg_setter[9] = '\0';
	}

	return i_status;
}


int main(int argc, char const *argv[])
{
	char escape_code_txt[ESCAPE_CODE_COLOR_SIZE];
	text_col('B',escape_code_txt);

	for (unsigned char i = 0; i < ESCAPE_CODE_COLOR_SIZE; i++)
	{
		printf("%c",escape_code_txt[i]);
	}
	printf("\n");	

	return 0;
}
