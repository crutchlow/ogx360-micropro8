# To Compile & Install

platformio run -e OGX360

press reset pins twice to start bootloader

avrdude -p m32U4 -P /dev/ttyACM0 -c avr109 -U flash:w:.pio/build/OGX360/firmware.hex

<img src="./diagram.png" alt="wire diagram" width="100%"/>  

<img src="./complete.jpg" alt="complete adapter" width="100%"/> 
