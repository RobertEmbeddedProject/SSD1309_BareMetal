// i2c_comms.h
#define I2C_MASTER_NUM I2C_NUM_0
#define I2C_MASTER_SDA_IO 21
#define I2C_MASTER_SCL_IO 22
#define I2C_MASTER_FREQ_HZ 400000
#define SSD1309_ADDR 0x3C  // Default I2C address
#ifndef I2C_COMMS_H
#define I2C_COMMS_H

void i2c_master_init(void);

#endif // I2C_COMMS_H