#! /bin/bash

cat /proc/cpuinfo | grep physical | uniq -c

