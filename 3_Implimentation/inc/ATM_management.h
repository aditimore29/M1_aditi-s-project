/**
 * @file ATM_management.h
 * @author aditi more
 * @brief ATM management system for ATM transactions like generate pin,withdraw money,deposite money,check balance etc.
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ATM_MANAGEMENT_H
#define _ATM_MANAGEMENT_H
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
/**
 * @brief generate new pin 
 */
extern void generate_pin(void);
/**
 * @brief enter the pin if it is valid then you have to choose option for further transactions.else "INVALID PIN" message will be print. 
 */
extern void enter_pin(void);
/**
 *  @brief takes balance as an parameter
 *   @ enter amount for deposite
 * @return current balance 
 */
extern float deposite(float);
/**
 * @brief takes balance as an parameter
 *   @ enter amount for withdraw

 * @return current balance 
 */
extern float withdraw(float,float);
/**
 * @brief takes balance and min balance as parameter
 * @prints current balance 
 */  
extern void checkbalance(float);
/**
 * @brief prints exit message
 * 
 */
extern void Exit();
/**
 * @brief takes number_of_seconds as parameter
 * 
 */
extern void delay(int);
#endif /*_ATM_MANAGEMENT_H*/