#include "watchy_peony.h"

void WatchyPeony::drawWatchFace() {
  display.fillScreen(GxEPD_BLACK);


  // hour marks
  for(int16_t i = 0; i < 12; i++) {
    display.drawLine(
      100,
      100,
      100 + 26 * sin(i * 30 * DEG2RAD),
      100 - 26 * cos(i * 30 * DEG2RAD),
      GxEPD_WHITE
      );
    }

  // minute marks
  for(int16_t i = 0; i < 60; i++) {
    if(i % 5 == 0) {
      display.drawLine(
        100 + 50 * sin(i * 6 * DEG2RAD),
        100 - 50 * cos(i * 6 * DEG2RAD),
        100 + 70 * sin(i * 6 * DEG2RAD),
        100 - 70 * cos(i * 6 * DEG2RAD),
        GxEPD_WHITE
        );
      }
    else {
      display.drawLine(
        100 + 55 * sin(i * 6 * DEG2RAD),
        100 - 55 * cos(i * 6 * DEG2RAD),
        100 + 65 * sin(i * 6 * DEG2RAD),
        100 - 65 * cos(i * 6 * DEG2RAD),
        GxEPD_WHITE
        );
      }
    }

  float hourAngle = 30 * (currentTime.Hour + currentTime.Minute / 60.0);

  float minuteAngle = 6 * currentTime.Minute;


  //hour hand pt. 1
  display.fillTriangle(
    100 + 45 * sin(hourAngle * DEG2RAD),
    100 - 45 * cos(hourAngle * DEG2RAD),
    100 + 30 * sin((hourAngle + 7) * DEG2RAD),
    100 - 30 * cos((hourAngle + 7) * DEG2RAD),
    100 + 30 * sin((hourAngle - 7) * DEG2RAD),
    100 - 30 * cos((hourAngle - 7) * DEG2RAD),
    GxEPD_WHITE
    );


  //hour hand pt. 2
  display.fillTriangle(
    100 + 45 * sin(hourAngle * DEG2RAD),
    100 - 45 * cos(hourAngle * DEG2RAD),
    100 + 30 * sin((hourAngle + 7) * DEG2RAD),
    100 - 30 * cos((hourAngle + 7) * DEG2RAD),
    100 + 45 * sin((hourAngle + 11) * DEG2RAD),
    100 - 45 * cos((hourAngle + 11) * DEG2RAD),
    GxEPD_WHITE
    );

  //hour hand pt. 3
  display.fillTriangle(
    100 + 45 * sin(hourAngle * DEG2RAD),
    100 - 45 * cos(hourAngle * DEG2RAD),
    100 + 30 * sin((hourAngle - 7) * DEG2RAD),
    100 - 30 * cos((hourAngle - 7) * DEG2RAD),
    100 + 45 * sin((hourAngle - 11) * DEG2RAD),
    100 - 45 * cos((hourAngle - 11) * DEG2RAD),
    GxEPD_WHITE
    );


  //hour hand pt. 4a
  display.fillTriangle(
    100 + 45 * sin((hourAngle - 8) * DEG2RAD),
    100 - 45 * cos((hourAngle - 8) * DEG2RAD),
    100 + 45 * sin((hourAngle - 11) * DEG2RAD),
    100 - 45 * cos((hourAngle - 11) * DEG2RAD),
    100 + 200 * sin((hourAngle - 13) * DEG2RAD),
    100 - 200 * cos((hourAngle - 13) * DEG2RAD),
    GxEPD_WHITE
    );

  //hour hand pt. 4b
  display.fillTriangle(
    100 + 45 * sin((hourAngle - 11) * DEG2RAD),
    100 - 45 * cos((hourAngle - 11) * DEG2RAD),
    100 + 200 * sin((hourAngle - 13) * DEG2RAD),
    100 - 200 * cos((hourAngle - 13) * DEG2RAD),
    100 + 200 * sin((hourAngle - 15) * DEG2RAD),
    100 - 200 * cos((hourAngle - 15) * DEG2RAD),
    GxEPD_WHITE
    );

  //hour hand pt. 5a
  display.fillTriangle(
    100 + 45 * sin((hourAngle + 8) * DEG2RAD),
    100 - 45 * cos((hourAngle + 8) * DEG2RAD),
    100 + 45 * sin((hourAngle + 11) * DEG2RAD),
    100 - 45 * cos((hourAngle + 11) * DEG2RAD),
    100 + 200 * sin((hourAngle + 13) * DEG2RAD),
    100 - 200 * cos((hourAngle + 13) * DEG2RAD),
    GxEPD_WHITE
    );

  //hour hand pt. 5b
  display.fillTriangle(
    100 + 45 * sin((hourAngle + 11) * DEG2RAD),
    100 - 45 * cos((hourAngle + 11) * DEG2RAD),
    100 + 200 * sin((hourAngle + 13) * DEG2RAD),
    100 - 200 * cos((hourAngle + 13) * DEG2RAD),
    100 + 200 * sin((hourAngle + 15) * DEG2RAD),
    100 - 200 * cos((hourAngle + 15) * DEG2RAD),
    GxEPD_WHITE
    );



  //minute hand pt. 1
  display.fillTriangle(
    100 + 200 * sin(minuteAngle * DEG2RAD),
    100 - 200 * cos(minuteAngle * DEG2RAD),
    100 + 75 * sin((minuteAngle + 3) * DEG2RAD),
    100 - 75 * cos((minuteAngle + 3) * DEG2RAD),
    100 + 75 * sin((minuteAngle - 3) * DEG2RAD),
    100 - 75 * cos((minuteAngle - 3) * DEG2RAD),
    GxEPD_WHITE
    );


  //minute hand pt. 2
  display.fillTriangle(
    100 + 200 * sin(minuteAngle * DEG2RAD),
    100 - 200 * cos(minuteAngle * DEG2RAD),
    100 + 75 * sin((minuteAngle + 3) * DEG2RAD),
    100 - 75 * cos((minuteAngle + 3) * DEG2RAD),
    100 + 200 * sin((minuteAngle + 7) * DEG2RAD),
    100 - 200 * cos((minuteAngle + 7) * DEG2RAD),
    GxEPD_WHITE
    );

  //minute hand pt. 3
  display.fillTriangle(
    100 + 200 * sin(minuteAngle * DEG2RAD),
    100 - 200 * cos(minuteAngle * DEG2RAD),
    100 + 75 * sin((minuteAngle - 3) * DEG2RAD),
    100 - 75 * cos((minuteAngle - 3) * DEG2RAD),
    100 + 200 * sin((minuteAngle - 7) * DEG2RAD),
    100 - 200 * cos((minuteAngle - 7) * DEG2RAD),
    GxEPD_WHITE
    );


  display.setFont(&Font5x7FixedMono);

  int16_t  x_center, y_center;
  uint16_t w_center, h_center;

  char meridiem[] = "AM";

  //AM & PM
  if(currentTime.Hour != ((currentTime.Hour+11)%12)+1){
    strcpy(meridiem, "PM");
    }

  display.getTextBounds(meridiem, 100, 100, &x_center, &y_center, &w_center, &h_center);
  display.setTextColor(GxEPD_BLACK);
  for(int16_t i = -2; i <= 2; i++) {
    for(int16_t j = -2; j <= 2; j++) {
      display.setCursor(100 - w_center / 2 + i, 98 - h_center / 2 + j);
      display.println(meridiem);
      }
    }

  display.setTextColor(GxEPD_WHITE);
  display.setCursor(100 - w_center / 2, 98 - h_center / 2);
  display.println(meridiem);



  char cal[10];
  sprintf(cal, "%d %s\0", currentTime.Day, monthShortStr(currentTime.Month));


  display.getTextBounds(cal, 100, 100, &x_center, &y_center, &w_center, &h_center);
  display.setTextColor(GxEPD_BLACK);
  for(int16_t i = -2; i <= 2; i++) {
    for(int16_t j = -2; j <= 2; j++) {
      display.setCursor(100 - w_center / 2 + i, 116 - h_center / 2 + j);
      display.println(cal);
      }
    }

  display.setTextColor(GxEPD_WHITE);
  display.setCursor(100 - w_center / 2, 116 - h_center / 2);
  display.println(cal);


  float VBAT = getBatteryVoltage();
  if(VBAT > 4.1){
    display.drawLine(
      95,
      78,
      105,
      78,
      GxEPD_WHITE);
    }
  if(VBAT > 3.95){
    display.drawLine(
      95,
      75,
      105,
      75,
      GxEPD_WHITE);
    }
  if(VBAT > 3.80){
    display.drawLine(
      95,
      72,
      105,
      72,
      GxEPD_WHITE);
    }

  }


