## Rasperry Pi - Linux driver example
A simple example of how to create a Linux device driver and load it on the Raspberry Pi 3.

### Dependencies

- Kernel headers
  - `sudo apt install raspberrypi-kernel-headers`

- Current kernel `build` directory must exists:
  ```
  $ ls /lib/modules/$(uname -r)/build
    Documentation  Module.symvers  certs    fs       ipc     mm       scripts   tools
    Kconfig        arch            crypto   include  kernel  net      security  usr
    Makefile       block           drivers  init     lib     samples  sound     virt
  ```

### How to compile
To build
```
$ make
```
To clean build

```
$ make clean
```
### How to install driver

```
sudo insmod driver-example.ko
```

### How to check

```
$ dmesg
[  132.515291] driver_example: loading out-of-tree module taints kernel.
[  132.515774] Init function
```
