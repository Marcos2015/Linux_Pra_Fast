#!/bin/bash

if ps -e | grep ssh | grep sshd 
then
  echo 'active'
else
  echo 'failed'
fi




