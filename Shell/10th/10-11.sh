#! /bin/sh

awk 'BEGIN{while (("ls /usr" | getline d ) > 0 ) print d }'

