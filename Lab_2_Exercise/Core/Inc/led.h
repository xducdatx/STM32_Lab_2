/*
 * led.h
 *
 *  Created on: Oct 2, 2023
 *      Author: datph
 */

#ifndef INC_LED_H_
#define INC_LED_H_
//extern int num;
void display7SEG(int num);
void update7SEG(int index);
void unEnableAll();
extern int hour;
extern int minute;
extern int second;
void updateClockBuffer();
void updateLEDMatrix(int index);
void shiftMatrix();
void unEnableAllGPIOB();
#endif /* INC_LED_H_ */
