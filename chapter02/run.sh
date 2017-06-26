#!/usr/bin/expect -f

# 获取当前文件夹
set dispScriptFile [file normalize [info script]]
set scriptFolder [file dirname $dispScriptFile]

# 执行脚本文件
spawn $scriptFolder/chapter02.sh

# Demo 1.2
expect "Please enter to numbers:"
send -- "2\n"
send -- "4\n"







