#!/usr/bin/expect -f

# 获取当前文件夹
set dispScriptFile [file normalize [info script]]
set scriptFolder [file dirname $dispScriptFile]

# 执行脚本文件
spawn $scriptFolder/chapter01.sh

# Demo 1.2
expect "Please enter to numbers:"
send -- "2\n"
send -- "4\n"
# Demo 1.2-P1.4
expect "Enter two numbers to plus:"
send -- "3\n"
send -- "5\n"
# Demo 1.2-P1.5
expect "Enter two numbers to plus:"
send -- "4\n"
send -- "6\n"

# Demo 1.4.3
expect "notQuantitativeValue"
send -- "1\n"
send -- "2\n"
send -- "3\n"
send -- "4\n"
send -- "5\n"
send -- "End input\n"

# Demo 1.4.4
expect "if语句，计算连续的相同数字的个数："
send -- "1\n"
send -- "2\n"
send -- "2\n"
send -- "4\n"
send -- "4\n"
send -- "4\n"
send -- "End input\n"

# Demo 1.5.1_d01
expect "请输入book信息测试Sales_item类："
send -- "0-201-X 4 99.96 24.99\n"
# Demo 1.5.1_d02
expect "请输入两个book信息测试相加："
send -- "0-201-X 3 20.00\n"
send -- "0-201-X 2 30.00\n"


interact
