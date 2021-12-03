#!/bin/bash
cd ros_packages
echo bitorobotics | sudo -S docker-compose restart 
sudo supervisorctl restart all
