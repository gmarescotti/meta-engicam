echo "Engicam custom startup"

#####disable framebuffer blank timeout
echo 0 > /sys/class/graphics/fbcon/cursor_blink
echo -e '\033[9;0]' > /dev/tty1  

#####calibrate touch if needed
#export TSLIB_TSDEVICE="/dev/input/touchscreen0"

#if [ ! -f /etc/pointercal ]; then
#	echo "Start calibration sequence..."
#	ts_calibrate
#else
#	echo "Calibration file present..."
#fi

#export QT_EGLFS_IMX6_NO_FB_MULTI_BUFFER=1
#export QT_QPA_EGLFS_TSLIB=1

#/usr/bin/democard -platform eglfs &

/usr/bin/fincantieri_app &
