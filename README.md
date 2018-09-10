# soft-trunk
## Using on Ubuntu
1. Install [libmodbus](https://github.com/stephane/libmodbus), following the instructions on its README; `$ ./autogen.sh; ./configure; sudo make install`
1. `$ sudo ldconfig` to create necessary links to the shared libraries
1. make sure the IP address is correct in ./soft_trunk/src/soft_trunk.cpp
1. move to ./soft_trunk, and `$make`
1. run `./soft_trunk`
