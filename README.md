# soft-trunk
## Using on Ubuntu

* install libmodbus library on ubuntu:
$ sudo apt-get update
$ sudo apt-get install libmodbus-dev

* make sure the IP address is correct in ./soft_trunk/src/soft_trunk.cpp

* cd to ./soft_trunk, and run `$ make`

* run `./soft_trunk`


Old:
1. Install [libmodbus](https://github.com/stephane/libmodbus), following the instructions on its README; `$ ./autogen.sh; ./configure; sudo make install`
1. `$ sudo ldconfig` to create necessary links to the shared libraries

