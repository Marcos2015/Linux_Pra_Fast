#! /bin/bash



system_upgrade_clean()
{
yum -y upgrade && yum -y update && yum -y clean all
	firefox
}

system_upgrade_clean

