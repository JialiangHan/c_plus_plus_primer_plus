
#/bin/bash/expect

work_path="/home/hx00sh8021091513000keh/hanxin_ws/src"
bitbucket_account="jialianghan@bitorobotics.ltd"
apppassword="cxPcwdcp6XgqKxjxKkK3"
repo_name_list=("bito_common bito_network bito_utility charger commandor factory_monitoring")

cd ${work_path}
for var in ${repo_name_list}
do
echo ${var}
git clone git@bitbucket.org:bito-robotics/${var}.git
expect "':"
send "${apppassword}\n"		
cd ${var} && git checkout $1
git pull
expect "':"
send "${bitbucket_account}\n"
expect "':"
send "${apppassword}\n"
git merge proj_crrc_hanxin
cd ..
done
