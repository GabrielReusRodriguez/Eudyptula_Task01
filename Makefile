obj-m  += task1_module.o

ifndef kernel_src
	kernel_src=/lib/modules/$(shell uname -r)/build
#	kernel_src= /usr/src/kernels/$(kernel_version)
endif

all:
	make -C $(kernel_src) M=$(PWD) modules

clean:
	make -C $(kernel_src) M=$(PWD) clean
