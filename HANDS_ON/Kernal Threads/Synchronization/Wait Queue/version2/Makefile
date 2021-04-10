obj-m += version2.o
KSRC=/home/user/workspace/package/linux-4.14.202
#KSRC=/home/rsola/eworkdir/buildws/linux-4.14.177
#ARCH=arm
#CROSS_COMPILE_PREFIX=arm-linux-gnueabi-
all:
	make -C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
clean:
	make -C ${KSRC} M=${PWD} clean  ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

