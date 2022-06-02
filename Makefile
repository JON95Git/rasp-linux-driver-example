# This Makefile is a extension of kernel-header Makefile

# This variable exists in kernel-headers Makefile
obj-m += driver-example.o

KDIR = /lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(shell pwd) modules

clean:
	make -C $(KDIR) M=$(shell pwd) clean
