#! /usr/bin/env python
# coding=utf-8

import sys,os

raw = ''
for hex in raw_input().split():
  raw+=chr(int(hex, 16))
print raw