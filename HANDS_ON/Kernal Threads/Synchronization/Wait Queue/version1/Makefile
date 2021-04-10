obj-m += version1.o

#KSRC=/lib/modules/$(shell uname -r)/build
KSRC=/home/user/workspace/package/linux-4.14.202
#ARCH=arm
#CROSS_COMPILE_PREFIX=arm-linux-gnueabi-

all:
	make -C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
clean:
	make -C ${KSRC} M=${PWD} clean  ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

