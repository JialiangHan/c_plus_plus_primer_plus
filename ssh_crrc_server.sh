#!/usr/bin/expect
set timeout -1
set server_ip 192.168.0.52
set host_name hx00sh8021083015000keh
set server_password bitorobotics

spawn ssh $host_name@$server_ip
expect "password:"
send "$server_password\n"
expect "*$*"
send "cd hanxin_ws/src/hanxin/hanxin/log\n"
interact
