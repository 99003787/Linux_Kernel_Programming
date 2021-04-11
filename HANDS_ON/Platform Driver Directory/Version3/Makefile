obj-m += device_tree.o
KSRC = 

all:
	make -C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

clean:
	make -C ${​​​​​​​​KSRC}​​​​​​​​ M=${​​​​​​​​PWD}​​​​​​​​ clean ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
