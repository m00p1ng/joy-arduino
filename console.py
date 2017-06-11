from pykeyboard import PyKeyboard
import serial

ser = serial.Serial("/dev/tty.usbmodem1411", 115200)

k = PyKeyboard()

while 1:
	if ser.read() == 'U':
		k.tap_key('w')
		print "UP"
	if ser.read() == 'D':
		k.tap_key('s')
		print "DOWN"
	if ser.read() == 'L':
		k.tap_key('a')
		print "LEFT"
	if ser.read() == 'R':
		k.tap_key('d')
		print "RIGHT"