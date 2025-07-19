#pragma once

void ssd1309_reset(void);                       // Must reset the SSD1309 before initializing
void ssd1309_init(void);                        // Initialize OLED and I2C
void ssd1309_clear(void);                       // Clear display buffer
void ssd1309_display(void);                     // Send buffer to OLED
void ssd1309_draw_text(int x, int y, const char *text); // Draw text

