iouyap
======

Bridge IOU to UDP, TAP and Ethernet.

The project was revived to facilitate running IOL in containers. 

Please note that in most other applications **iouyap has been replaced by uBridge** https://github.com/GNS3/ubridge

Installation on Linux (Debian based)
------------------------------------

.. code:: bash

   sudo apt-get install git bison flex

   git clone http://github.com/ndevilla/iniparser.git
   cd iniparser
   make
   sudo cp libiniparser.* /usr/lib/
   sudo cp src/iniparser.h /usr/local/include
   sudo cp src/dictionary.h /usr/local/include
   cd ..

   git clone https://github.com/GNS3/iouyap.git
   cd iouyap
   make
   sudo make install

