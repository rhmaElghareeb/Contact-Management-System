#ifndef APP_LAYER_H_INCLUDED
#define APP_LAYER_H_INCLUDED
#include "DataType.h"
#include "Data_Base.h"
#define MAX_NAME 100
#define MAX_EMAIL 50
#define MAX_NUM 12

static void Start_Program(char *Welcome_Statement ,char Count) ;
/**
 * @brief  : Starts the program with animation style.
 * @param  : None
 * @return : None
 *
 */
void Exit(void) ;
/**
 * @brief  : Ends the program
 * @param  : None
 * @return : None
 *
 */

  int Phone_info(char *phone);
/**
 * @brief  : Take phone information from the user , he has 3 tries to input it right.
 * @param  : None
 * @return : returns 1 if the user input is right, wither it returns 0;
 *
 */

 int Email_info(char *mail);
 /**
 * @brief  : Take Email information from the user , he has 3 tries to input it right.
 * @param  : None
 * @return : returns 1 if the user input is right, wither it returns 0;
 *
 */
 int Name_info(char  *name);
 /**
 * @brief  : Take Name information from the user , he has 3 tries to input it right.
 * @param  : None
 * @return : returns 1 if the user input is right, wither it returns 0;
 *
 */
int validateInput(const char *ptr, Std_ReturnType(*func)(const char *));
 /**
 * @brief  : Checks for the validation of the inputs information three times.
             it takes a pointer to a function so we can check for the validation of any function.
 * @param  : None
 * @return : returns 1 if the user input is right, wither it returns 0;
 *
 */

 #endif // APP_LAYER_H_INCLUDED

