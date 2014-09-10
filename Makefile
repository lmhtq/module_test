obj-m := simplest_module.o

KDIR := /lib/modules/$(sh uname -r)/build

PWD := $(sh pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm *.o *.ko *.mod.c Modules.symvers modules.order -f
