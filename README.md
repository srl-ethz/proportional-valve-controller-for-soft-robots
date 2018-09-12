# soft-trunk
## Using on Ubuntu

* install libmodbus library on ubuntu:
`$ sudo apt-get update`
`$ sudo apt-get install libmodbus-dev`

* make sure the IP address (192.168.1.101) is correctly set in ./soft_trunk/src/soft_trunk.cpp

* cd to ./soft_trunk, and run 
`$ make`

* to execute the code from soft_trunk.cpp, then run 
`$ ./soft_trunk`


Old way of installing the modbus library (not using apt-get):
* Install [libmodbus](https://github.com/stephane/libmodbus), following the instructions on its README; `$ ./autogen.sh; ./configure; sudo make install`
* `$ sudo ldconfig` to create necessary links to the shared libraries

