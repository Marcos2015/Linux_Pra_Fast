#! /bin/bash

top | grep %Cpu | awk '{print $8}'


