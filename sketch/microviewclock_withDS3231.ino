/*************************************************************************
 * Simple digital clock, using MicroVIew and 
 * and DS3231 library from http://henningkarlsen.com/electronics/library.php?id=74
 * Code is stored on https://codebender.cc/sketch:51975 and https://github.com/pavelsuk/MicroViewClock
 * See the project page for HW and SW instructions: 
 * 	https://samepage.io/app/#!/8740458cffb7c86971911d5f12e1e2291de7f7b7/page-132750646494497742-microview-clock
 *  https://samepage.io/app/#!/8740458cffb7c86971911d5f12e1e2291de7f7b7/page-143148096732320641-microview-clock-based-on-ds-3231
**************************************************************************/
 
#include "DS3231.h"
#include <Time.h>
#include <MicroView.h>


// Set your own pins with these defines !
#define DS3231_SCL_PIN   3    // Arduino pin for the Serial Clock
#define DS3231_SDA_PIN   5    // Arduino pin for the Data I/O


DS3231  rtc(DS3231_SDA_PIN, DS3231_SCLK_PIN);

Time t;

void setup()
{
	// MicroView setup:

    uView.begin();
    uView.clear(PAGE);      // clear the page buffer
    
    rtc.begin();

	
// Remove the next define, 
// after the right date and time are set.
// #define SET_DATE_TIME_JUST_ONCE
#ifdef SET_DATE_TIME_JUST_ONCE  
	rtc.setDate(3,10,2014); // Set date 
	rtc.setDOW(FRIDAY); 	// Set day of the week 
	rtc.setTime(22,29,10); // Set time 
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
