#include "ssd1309.h"  // Include the OLED driver
#include "freertos/FreeRTOS.h"   //RTOS implement for time vTaskDelay commands
#include "freertos/task.h"

void app_main(void) {
    ssd1309_reset();
    ssd1309_init();                // Initialize I2C and OLED display
    ssd1309_clear();               // Clear the local framebuffer
    ssd1309_draw_text(10, 3, "Alarm: 7:00AM");   // Draw "Hello" at top-left
    ssd1309_draw_text(10, 4, "+@=#$^&*");   // Draw "World" on next page (8px down)
    ssd1309_display();             // Push buffer to the OLED screen

//Blinks text for testing
    while(1){
    vTaskDelay(pdMS_TO_TICKS(500));
    ssd1309_cmd(0xAE);
    vTaskDelay(pdMS_TO_TICKS(100));
    ssd1309_cmd(0xAF);
    }
}
