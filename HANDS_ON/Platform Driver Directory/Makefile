obj-m += dummy_serial_device.o dummy_serial_driver.o
KSRC = /home/user/workspace/Package/linux-4.14.202
all:
	make -C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
clean:
	make -C ${KSRC} M=${PWD} clean


