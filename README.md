```
 ______        ____  __
|  _ \ \      / /  \/  |
| | | \ \ /\ / /| |\/| |
| |_| |\ V  V / | |  | |
|____/  \_/\_/  |_|  |_|
     ____          _            _       _____
 _  |  _ \ ___  __| | __ _ _ __(_)     | ____|___
(_) | |_) / _ \/ _` |/ _` | '__| |_____|  _| / __|
 _  |  _ <  __/ (_| | (_| | |  | |_____| |___\__ \
(_) |_| \_\___|\__,_|\__,_|_|  |_|     |_____|___/

```
# suckless

[查看suckless官网](https://dwm.suckless.org/)

下载后需要设置下自己的一些用户位置，有空换成$HOME
sudo make clean install

## dwm
Dynamic Window Manager
窗口管理器
### config
- sddm
- .xinitrc


## st
可自己跟换配色
> config.h

## demenu

## picom
窗口模糊效果
### install

> .config/picom.conf
> .config/picom/picom.conf


## surf
- 极简的web浏览器
- 可自定义


### install
> git clone https://git.suckless.org/surf

### config
some script you can config in $HOME/.surf

### patch
how to patch the diff
首先需要补丁文件到主程序下然后运行
> patch < ./文件名(其位置)

然后如果成功会有sucees
fail 就会产生两个文件
- orij 为更改前的文件，可用于恢复
- rej 需要删除或这增加的内容

将对应需要加的添加到文件中，记得删除 **+** 号

## farbfrld
好像是图片查看器
暂未了解相关内容


