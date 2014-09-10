obj-m := simple_module.o

KDIR := /home/bluecat/DATA/courses/codes/linux-3.15.10/

#PWD := $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm *.o *.ko *.mod.c Modules.symvers modules.order -f
