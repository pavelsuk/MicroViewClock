/*************************************************************************
 * Simple digital clock, using MicroView
 * and DS1302 library (http://www.henningkarlsen.com/electronics/library.php?id=5)
 * Code is stored on https://codebender.cc/sketch:47681 and https://github.com/pavelsuk/MicroViewClock
 * See the project page for HW and SW instructions: 
 * 	https://samepage.io/app/#!/8740458cffb7c86971911d5f12e1e2291de7f7b7/page-132750646494497742-microview-clock
 *
**************************************************************************/
 
#include <DS1302.h>
#include <Time.h>
#include <MicroView.h>

// Set your own pins with these defines !
#define DS1302_SCLK_PIN   3    // Arduino pin for the Serial Clock
#define DS1302_IO_PIN     5    // Arduino pin for the Data I/O
#define DS1302_CE_PIN     6    // Arduino pin for the Chip Enable

DS1302 rtc(DS1302_CE_PIN,DS1302_IO_PIN,DS1302_SCLK_PIN);

void setup()
{
	// MicroView setup:

    uView.begin();
    uView.clear(PAGE);      // clear the page buffer
	
// Remove the next define, 
// after the right date and time are set.
// #define SET_DATE_TIME_JUST_ONCE
#ifdef SET_DATE_TIME_JUST_ONCE  
	rtc.setDate(6,9,2014); // Set date to Sep 6, 2014
	rtc.setDOW(SATURDAY); // Set day of the week to Saturday
	rtc.setTime(16,41,00); // Set time to 16:41:00
#endif

}

void loop()
{
	
	uView.setCursor(8,18);
    uView.print(rtc.getTimeStr());
 
 	uView.setCursor(1,32);
    uView.print(rtc.getDateStr());
    
    uView.display();        // display current page buffer

  	delay( 1000);
}
