#! /bin/bash

echo ps -A -o stat,ppid,pid | grep -e '^[Zz]' | wc -l 

ps aux | grep zombie | wc -l
ps aux | grep defunct | wc -l


