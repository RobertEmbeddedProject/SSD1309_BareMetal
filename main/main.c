#include "ssd1309.h"  // Include the OLED driver

void app_main(void) {
    ssd1309_reset();
    ssd1309_init();                // Initialize I2C and OLED display
    ssd1309_clear();               // Clear the local framebuffer
    ssd1309_draw_text(0, 0, "Hello");   // Draw "Hello" at top-left
    ssd1309_draw_text(0, 1, "World");   // Draw "World" on next page (8px down)
    ssd1309_display();             // Push buffer to the OLED screen
}
