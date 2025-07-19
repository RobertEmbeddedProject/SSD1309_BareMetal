idf_component_register(SRCS "main.c" "ssd1309.c"
                       INCLUDE_DIRS "."
                       PRIV_REQUIRES driver)
#PRIV_REQUIRES tells IDF that the program uses headers from the driver/ component..