#!/bin/bash

if systemctl status telnet.socket | grep active
then
  echo 'active'
else
  echo 'failed'
fi




