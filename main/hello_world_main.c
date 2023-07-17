#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h" // เพื่อการใช้งาน digital output (GPIO)
#include "LED.h"

#define pin 23
int ipin = pin;

void app_main(void)
{
    gpio_reset_pin(pin);                       // รีเซ็ตสถานะของขาหมายเลข 22
    gpio_set_direction(pin, GPIO_MODE_OUTPUT); // กำหนดให้ขาหมายเลข 22 เป็น digital output

    while (true) // while (true) = วนรอบไม่มีที่สิ้นสุด
    {
        ON(ipin);
        sleep(1); // หน่วงเวลา 1 วินาที
        OFF(ipin);
        sleep(1); // หน่วงเวลา 1 วินาที
    }
}