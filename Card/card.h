/**************************************************************************************************************************
 *                                                      File Guard
**************************************************************************************************************************/
#ifndef CARD_CARD_H_
#define CARD_CARD_H_

#include <string.h>
#include <ctype.h>

/**************************************************************************************************************************
 *                                              		  Macros
**************************************************************************************************************************/
#define EXP_DATE_Y_UNITS    4
#define EXP_DATE_Y_TENS     3
#define EXP_DATE_M_UNITS    1    
#define EXP_DATE_M_TENS     0

#define SPACE_ASCII_INDEX   32
#define A_ASCII_INDEX       65
#define Z_ASCII_INDEX       90
#define a_ASCII_INDEX       97
#define z_ASCII_INDEX       122

/**************************************************************************************************************************
 *                                              User Defined Data Type
**************************************************************************************************************************/
typedef struct ST_cardData_t
{
	uint8_t cardHolderName[25];
	uint8_t primaryAccountNumber[20];
	uint8_t cardExpirationDate[6];
	
}ST_cardData_t; 


typedef enum EN_cardError_t
{
	CARD_OK = 0,
	WRONG_NAME,
	WRONG_EXP_DATE,
	WRONG_PAN
	
}EN_cardError_t;


/**************************************************************************************************************************
 *                                                  Function Prototypes
**************************************************************************************************************************/
EN_cardError_t getCardHolderName(ST_cardData_t* cardData);
EN_cardError_t getCardExpirayDate(ST_cardData_t* cardData);
EN_cardError_t getCardPan(ST_cardData_t* cardData);

/**************************************************************************************************************************
 *                                             Function Prototypes For Testing
**************************************************************************************************************************/
void getCardHolderNameTest(void);
void getCardPanTest(void);

#endif /*CARD_CARD_H_*/