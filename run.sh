#!/bin/bash

export PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin


src=$1.cpp
exe_bin=$1
shift
echo "# start"
g++ -o $exe_bin $src && ./$exe_bin $@;echo " $?"
rm -f $exe_bin
echo "# end"
