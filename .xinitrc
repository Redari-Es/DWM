#xrandr --newmode "1920x1080" 220.75 1920 2064 2264 2608 1080 1083 1088 1130 -hsync +vsync
#xrandr --addmode Virtual-1 "1920x1080_75.00"
#xrandr --output Virtual-1 --mode "1920x1080_75.00"

source /etc/X11/xinit/xinitrc

#fcitx
#export GTK_IM_MODULE=fcitx
#export QT_IM_MODULE=fcitx
#export XMODIFIERS=@im=fcitx
#fcitx &

#fcitx5

export INPUT_METHOD=fcitx5
export GTK_IM_MODULE=fcitx5
export QT_IM_MODULE=fcitx5
export XMODIFIERS=@im=fcitx5


fcitx5 &
#

#DWM
# Here Kde is kept as default
session=${1:-plasma-x11}

case $session in
		kde) exec startplasma-x11;;
		dwm|dwm)exec startdwm;;
		#No known session, try to run it as command
		*)exec $1;;
esac
