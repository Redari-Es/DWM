# DWM
This is a window manager
## 安装说明
依赖
- dwm 窗口管理器
- st 终端
- demenu or rofi
- xorg-all 基本上全部都可以装

### 方式
> cd ./local/share/DWM/

> sudo make clean install
> exec dwm


## 一些问题
- 如何解决外接屏幕的问题
- 有哪些按键
- 按到某些键会回到sddm登录页面
- denemu和rofi

## keymap

| key            | decription                   |
|----------------|------------------------------|
| XK             | = window键                   |
| XK_s           | 打开 demenu                  |
| XK_return      | 打开终端                     |
| XK_c           | 打开浏览器                   |
| XK_'           | 打开一个终端在中间           |
| xk_f           | 桌面全屏                     |
| XK_t           | 桌面平铺                     |
| XK_y           | 桌面浮动                     |
| XK_m           | 桌面单页                     |
| XK_space       | 回到一个桌面方式             |
| XK_S_space     | 切换浮动                     |
| XK_k           | 桌面重置                     |
| XK_u           | 切换光标到上一个             |
| XK_e           | 切换光标到下一个             |
| XK_S_u         | 将当前窗口移动到上一个       |
| XK_S_e         | 将当前窗口移动到下一个       |
| XK_i           | 切换虚拟窗口到下一个         |
| XK_n           | 切换虚拟窗口到下一个         |
| XK_i           | 将当前窗口推到下一个虚拟桌面 |
| XK_n           | 将当前窗口推到上一个虚拟桌面 |
| XK_d           | 左移调整窗口                 |
| XK_h           | 右移调整窗口                 |
| XK_S_d         | 左推窗口                     |
| XK_S_h         | 右推窗口                     |
| XK_k           | 隐藏当前窗口                 |
| XK_S_k         | 恢复隐藏窗口                 |
| XK_o           | 隐藏其他窗口                 |
| XK_S_o         | 恢复隐藏的其他窗口           |
| XK_tab         | 切换上一个虚拟桌面           |
| XK_S_tab       | 切换下一个虚拟桌面           |
| XK_q           | 关闭当前窗口                 |
| XK_mouseleft   | 移动当前窗口位置             |
| XK_mouseright  | 调整当前窗口大小             |
| XK_mousemiddle | 重置切换窗口                 |
| XK_b           | 切换背景图片                 |
| C_XK_s         | 打开screenkey                |
| XK_0           | 显示全部虚拟桌面栏           |
| XK_S_0         | 关闭显示全部虚拟桌面栏(失效) |
| XK_其他数字    | 打开第几个桌面               |
| XK_S_其他数字  | 将当前窗口放置第几个桌面     |





## patch
有哪些补丁

- [dwm-alpha-20180613-b69c870.diff](https://dwm.suckless.org/patches/alpha/)
- [dwm-autostart-20161205-bb3bd6f.diff](https://dwm.suckless.org/patches/autostart/)
- [dwm-awesomebar-20191003-80e2a76.diff](https://dwm.suckless.org/patches/awesomebar/)
- [dwm-fullscreen-6.2.diff](https://dwm.suckless.org/patches/fullscreen/)
- [dwm-hide-and-restore.diff](https://github.com/theniceboy/dwm-hide-and-restore-win.diff) (a custom patch by @theniceboy)
- [dwm-hide_vacant_tags-6.2.diff](https://dwm.suckless.org/patches/hide_vacant_tags/)
- [dwm-noborder-6.2.diff](https://dwm.suckless.org/patches/noborder/)
- [dwm-pertag-20170513-ceac8c9.diff](https://dwm.suckless.org/patches/pertag/)
- [dwm-r1522-viewontag.diff](https://dwm.suckless.org/patches/viewontag/)
- [dwm-rotatestack-20161021-ab9571b.diff](https://dwm.suckless.org/patches/rotatestack/)
- [dwm-vanitygaps-20190508-6.2.diff](https://dwm.suckless.org/patches/vanitygaps/)


## config

config.h
config.mk

## Running dwm
-----------
Add the following line to your .xinitrc to start dwm using startx:

    exec dwm

In order to connect dwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

    DISPLAY=foo.bar:1 exec dwm

(This will start dwm on display :1 of the host foo.bar.)

In order to display status info in the bar, you can do something
like this in your .xinitrc:

    while xsetroot -name "`date` `uptime | sed 's/.*,//'`"
    do
      sleep 1
    done &
    exec dwm
