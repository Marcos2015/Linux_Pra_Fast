#! /bin/bash

cat /proc/cpuinfo | grep MHz | cut -f2 -d: | uniq

