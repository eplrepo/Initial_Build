cmd_drivers/hid/hid-dr.ko := arm-buildroot-linux-uclibcgnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-dr.ko drivers/hid/hid-dr.o drivers/hid/hid-dr.mod.o ;  true